/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribePurchaseStateInfo response structure.
                */
                class DescribePurchaseStateInfoResponse : public AbstractModel
                {
                public:
                    DescribePurchaseStateInfoResponse();
                    ~DescribePurchaseStateInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0: available for trial application and purchase; 1: purchase only (including failed trial review and expired trial); 2: trial active; 3: Pro Edition active; 4: Pro Edition expired</p>
                     * @return State <p>0: available for trial application and purchase; 1: purchase only (including failed trial review and expired trial); 2: trial active; 3: Pro Edition active; 4: Pro Edition expired</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>Total resource cores = total protected cores + unprotected cores</p>
                     * @return AllCoresCnt <p>Total resource cores = total protected cores + unprotected cores</p>
                     * 
                     */
                    uint64_t GetAllCoresCnt() const;

                    /**
                     * 判断参数 AllCoresCnt 是否已赋值
                     * @return AllCoresCnt 是否已赋值
                     * 
                     */
                    bool AllCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Total protected cores = purchased cores + trial granted cores + elastic billing cores</p>
                     * @return CoresCnt <p>Total protected cores = purchased cores + trial granted cores + elastic billing cores</p>
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Unprotected cores (number of resource cores with protection not enabled)</p>
                     * @return UndefendCoresCnt <p>Unprotected cores (number of resource cores with protection not enabled)</p>
                     * 
                     */
                    uint64_t GetUndefendCoresCnt() const;

                    /**
                     * 判断参数 UndefendCoresCnt 是否已赋值
                     * @return UndefendCoresCnt 是否已赋值
                     * 
                     */
                    bool UndefendCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of purchased cores</p>
                     * @return AuthorizedCoresCnt <p>Number of purchased cores</p>
                     * 
                     */
                    uint64_t GetAuthorizedCoresCnt() const;

                    /**
                     * 判断参数 AuthorizedCoresCnt 是否已赋值
                     * @return AuthorizedCoresCnt 是否已赋值
                     * 
                     */
                    bool AuthorizedCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Trial giveaway of Pro Edition cores</p>
                     * @return GivenAuthorizedCoresCnt <p>Trial giveaway of Pro Edition cores</p>
                     * 
                     */
                    int64_t GetGivenAuthorizedCoresCnt() const;

                    /**
                     * 判断参数 GivenAuthorizedCoresCnt 是否已赋值
                     * @return GivenAuthorizedCoresCnt 是否已赋值
                     * 
                     */
                    bool GivenAuthorizedCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Current number of elastic billing cores</p>
                     * @return CurrentFlexibleCoresCnt <p>Current number of elastic billing cores</p>
                     * 
                     */
                    uint64_t GetCurrentFlexibleCoresCnt() const;

                    /**
                     * 判断参数 CurrentFlexibleCoresCnt 是否已赋值
                     * @return CurrentFlexibleCoresCnt 是否已赋值
                     * 
                     */
                    bool CurrentFlexibleCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of images.</p>
                     * @return ImageCnt <p>Number of images.</p>
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of licensed images</p>
                     * @return AuthorizedImageCnt <p>Number of licensed images</p>
                     * 
                     */
                    uint64_t GetAuthorizedImageCnt() const;

                    /**
                     * 判断参数 AuthorizedImageCnt 是否已赋值
                     * @return AuthorizedImageCnt 是否已赋值
                     * 
                     */
                    bool AuthorizedImageCntHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time.</p>
                     * @return ExpirationTime <p>Expiration time.</p>
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of purchased image licenses</p>
                     * @return PurchasedAuthorizedCnt <p>Number of purchased image licenses</p>
                     * 
                     */
                    uint64_t GetPurchasedAuthorizedCnt() const;

                    /**
                     * 判断参数 PurchasedAuthorizedCnt 是否已赋值
                     * @return PurchasedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool PurchasedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取<p>0 indicates the default state (not set by the user, i.e., the initial state), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (set by the user).</p>
                     * @return AutomaticRenewal <p>0 indicates the default state (not set by the user, i.e., the initial state), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (set by the user).</p>
                     * 
                     */
                    int64_t GetAutomaticRenewal() const;

                    /**
                     * 判断参数 AutomaticRenewal 是否已赋值
                     * @return AutomaticRenewal 是否已赋值
                     * 
                     */
                    bool AutomaticRenewalHasBeenSet() const;

                    /**
                     * 获取<p>Complimentary image licenses during the trial period may expire.</p>
                     * @return GivenAuthorizedCnt <p>Complimentary image licenses during the trial period may expire.</p>
                     * 
                     */
                    uint64_t GetGivenAuthorizedCnt() const;

                    /**
                     * 判断参数 GivenAuthorizedCnt 是否已赋值
                     * @return GivenAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool GivenAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p>
                     * @return BeginTime <p>Start time</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Sub-status (specific meaning depending on the State field)<br>When State is 4, valid values: ISOLATE (isolated) DESTROED (terminated)</p>
                     * @return SubState <p>Sub-status (specific meaning depending on the State field)<br>When State is 4, valid values: ISOLATE (isolated) DESTROED (terminated)</p>
                     * 
                     */
                    std::string GetSubState() const;

                    /**
                     * 判断参数 SubState 是否已赋值
                     * @return SubState 是否已赋值
                     * 
                     */
                    bool SubStateHasBeenSet() const;

                    /**
                     * 获取<p>Billing key</p>
                     * @return InquireKey <p>Billing key</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取<p>Protection policy</p>
                     * @return DefendPolicy <p>Protection policy</p>
                     * 
                     */
                    std::string GetDefendPolicy() const;

                    /**
                     * 判断参数 DefendPolicy 是否已赋值
                     * @return DefendPolicy 是否已赋值
                     * 
                     */
                    bool DefendPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Upper limit of elastic billing cores</p>
                     * @return FlexibleCoresLimit <p>Upper limit of elastic billing cores</p>
                     * 
                     */
                    uint64_t GetFlexibleCoresLimit() const;

                    /**
                     * 判断参数 FlexibleCoresLimit 是否已赋值
                     * @return FlexibleCoresLimit 是否已赋值
                     * 
                     */
                    bool FlexibleCoresLimitHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores in the protected cluster</p>
                     * @return DefendClusterCoresCnt <p>Number of cores in the protected cluster</p>
                     * 
                     */
                    uint64_t GetDefendClusterCoresCnt() const;

                    /**
                     * 判断参数 DefendClusterCoresCnt 是否已赋值
                     * @return DefendClusterCoresCnt 是否已赋值
                     * 
                     */
                    bool DefendClusterCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Protected host cores</p>
                     * @return DefendHostCoresCnt <p>Protected host cores</p>
                     * 
                     */
                    uint64_t GetDefendHostCoresCnt() const;

                    /**
                     * 判断参数 DefendHostCoresCnt 是否已赋值
                     * @return DefendHostCoresCnt 是否已赋值
                     * 
                     */
                    bool DefendHostCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores of the Pro Edition for trial use</p>
                     * @return TrialCoresCnt <p>Number of cores of the Pro Edition for trial use</p>
                     * 
                     */
                    uint64_t GetTrialCoresCnt() const;

                    /**
                     * 判断参数 TrialCoresCnt 是否已赋值
                     * @return TrialCoresCnt 是否已赋值
                     * 
                     */
                    bool TrialCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of machines with zero protection containers.</p>
                     * @return NoContainerCoresCnt <p>Number of machines with zero protection containers.</p>
                     * 
                     */
                    uint64_t GetNoContainerCoresCnt() const;

                    /**
                     * 判断参数 NoContainerCoresCnt 是否已赋值
                     * @return NoContainerCoresCnt 是否已赋值
                     * 
                     */
                    bool NoContainerCoresCntHasBeenSet() const;

                private:

                    /**
                     * <p>0: available for trial application and purchase; 1: purchase only (including failed trial review and expired trial); 2: trial active; 3: Pro Edition active; 4: Pro Edition expired</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>Total resource cores = total protected cores + unprotected cores</p>
                     */
                    uint64_t m_allCoresCnt;
                    bool m_allCoresCntHasBeenSet;

                    /**
                     * <p>Total protected cores = purchased cores + trial granted cores + elastic billing cores</p>
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * <p>Unprotected cores (number of resource cores with protection not enabled)</p>
                     */
                    uint64_t m_undefendCoresCnt;
                    bool m_undefendCoresCntHasBeenSet;

                    /**
                     * <p>Number of purchased cores</p>
                     */
                    uint64_t m_authorizedCoresCnt;
                    bool m_authorizedCoresCntHasBeenSet;

                    /**
                     * <p>Trial giveaway of Pro Edition cores</p>
                     */
                    int64_t m_givenAuthorizedCoresCnt;
                    bool m_givenAuthorizedCoresCntHasBeenSet;

                    /**
                     * <p>Current number of elastic billing cores</p>
                     */
                    uint64_t m_currentFlexibleCoresCnt;
                    bool m_currentFlexibleCoresCntHasBeenSet;

                    /**
                     * <p>Number of images.</p>
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * <p>Number of licensed images</p>
                     */
                    uint64_t m_authorizedImageCnt;
                    bool m_authorizedImageCntHasBeenSet;

                    /**
                     * <p>Expiration time.</p>
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * <p>Number of purchased image licenses</p>
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * <p>0 indicates the default state (not set by the user, i.e., the initial state), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (set by the user).</p>
                     */
                    int64_t m_automaticRenewal;
                    bool m_automaticRenewalHasBeenSet;

                    /**
                     * <p>Complimentary image licenses during the trial period may expire.</p>
                     */
                    uint64_t m_givenAuthorizedCnt;
                    bool m_givenAuthorizedCntHasBeenSet;

                    /**
                     * <p>Start time</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Sub-status (specific meaning depending on the State field)<br>When State is 4, valid values: ISOLATE (isolated) DESTROED (terminated)</p>
                     */
                    std::string m_subState;
                    bool m_subStateHasBeenSet;

                    /**
                     * <p>Billing key</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>Protection policy</p>
                     */
                    std::string m_defendPolicy;
                    bool m_defendPolicyHasBeenSet;

                    /**
                     * <p>Upper limit of elastic billing cores</p>
                     */
                    uint64_t m_flexibleCoresLimit;
                    bool m_flexibleCoresLimitHasBeenSet;

                    /**
                     * <p>Number of cores in the protected cluster</p>
                     */
                    uint64_t m_defendClusterCoresCnt;
                    bool m_defendClusterCoresCntHasBeenSet;

                    /**
                     * <p>Protected host cores</p>
                     */
                    uint64_t m_defendHostCoresCnt;
                    bool m_defendHostCoresCntHasBeenSet;

                    /**
                     * <p>Number of cores of the Pro Edition for trial use</p>
                     */
                    uint64_t m_trialCoresCnt;
                    bool m_trialCoresCntHasBeenSet;

                    /**
                     * <p>Number of machines with zero protection containers.</p>
                     */
                    uint64_t m_noContainerCoresCnt;
                    bool m_noContainerCoresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
