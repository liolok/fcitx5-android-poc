#ifndef _FCITX_FRONTEND_ANDROIDFRONTEND_ANDROIDFRONTEND_PUBLIC_H_
#define _FCITX_FRONTEND_ANDROIDFRONTEND_ANDROIDFRONTEND_PUBLIC_H_

#include <string>
#include <fcitx/candidatelist.h>
#include <fcitx/addoninstance.h>
#include <fcitx/inputcontext.h>

typedef std::function<void(const std::vector<std::string> &)> CandidateListCallback;
typedef std::function<void(const std::string &)> CommitStringCallback;
typedef std::function<void(const std::string &, const std::string &)> PreeditCallback;
typedef std::function<void(const std::string &, const std::string &)> InputPanelAuxCallback;

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, createInputContext,
                             ICUUID(const std::string &));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, destroyInputContext, void(ICUUID));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, keyEvent,
                             void(ICUUID, const Key &, bool isRelease));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, selectCandidate,
                             void(ICUUID, int idx));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, isInputPanelEmpty,
                             bool(ICUUID));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, resetInputPanel,
                             void(ICUUID));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, setCandidateListCallback,
                             void(const CandidateListCallback &));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, setCommitStringCallback,
                             void(const CommitStringCallback &));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, setPreeditCallback,
                             void(const PreeditCallback &));

FCITX_ADDON_DECLARE_FUNCTION(AndroidFrontend, setInputPanelAuxCallback,
                             void(const InputPanelAuxCallback &));

#endif // _FCITX_FRONTEND_ANDROIDFRONTEND_ANDROIDFRONTEND_PUBLIC_H_
