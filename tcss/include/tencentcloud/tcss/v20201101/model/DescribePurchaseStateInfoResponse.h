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
                     * 获取Valid values: `0` (available for trial and purchase); `1` (available for purchase only after failed trial review or trial expiration); `2` (trial effective); `3` (Pro Edition effective); `4` (Pro Edition expired).
                     * @return State Valid values: `0` (available for trial and purchase); `1` (available for purchase only after failed trial review or trial expiration); `2` (trial effective); `3` (Pro Edition effective); `4` (Pro Edition expired).
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
                     * 获取
                     * @return AllCoresCnt 
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
                     * 获取Total number of protected cores. It is the sum of the number of purchased cores, the number of free trial cores, and the number of elastic billing cores.
                     * @return CoresCnt Total number of protected cores. It is the sum of the number of purchased cores, the number of free trial cores, and the number of elastic billing cores.
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
                     * 获取
                     * @return UndefendCoresCnt 
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
                     * 获取Number of purchased cores
                     * @return AuthorizedCoresCnt Number of purchased cores
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
                     * 获取Number of free trial cores for Pro Edition.
                     * @return GivenAuthorizedCoresCnt Number of free trial cores for Pro Edition.
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
                     * 获取
                     * @return CurrentFlexibleCoresCnt 
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
                     * 获取Image count
                     * @return ImageCnt Image count
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
                     * 获取Number of licensed images
                     * @return AuthorizedImageCnt Number of licensed images
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
                     * 获取Expiration time
                     * @return ExpirationTime Expiration time
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
                     * 获取Number of purchased image licenses
                     * @return PurchasedAuthorizedCnt Number of purchased image licenses
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
                     * 获取0 indicates the default status (it has not been set by the user, namely the initial status); 1 indicates automatic renewal; 2 indicates explicit non-automatic renewal (it has been set by the user).
                     * @return AutomaticRenewal 0 indicates the default status (it has not been set by the user, namely the initial status); 1 indicates automatic renewal; 2 indicates explicit non-automatic renewal (it has been set by the user).
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
                     * 获取Complimentary image licenses during the trial period may expire.
                     * @return GivenAuthorizedCnt Complimentary image licenses during the trial period may expire.
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
                     * 获取Start time.
                     * @return BeginTime Start time.
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
                     * 获取Substatus (specific meaning depending on the State field)
Valid values when State is 4: ISOLATE, TERMINATED.
                     * @return SubState Substatus (specific meaning depending on the State field)
Valid values when State is 4: ISOLATE, TERMINATED.
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
                     * 获取Billing key.
                     * @return InquireKey Billing key.
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
                     * 获取
                     * @return DefendPolicy 
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
                     * 获取
                     * @return FlexibleCoresLimit 
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
                     * 获取
                     * @return DefendClusterCoresCnt 
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
                     * 获取
                     * @return DefendHostCoresCnt 
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
                     * 获取Number of trial cores for Pro Edition.
                     * @return TrialCoresCnt Number of trial cores for Pro Edition.
                     * 
                     */
                    uint64_t GetTrialCoresCnt() const;

                    /**
                     * 判断参数 TrialCoresCnt 是否已赋值
                     * @return TrialCoresCnt 是否已赋值
                     * 
                     */
                    bool TrialCoresCntHasBeenSet() const;

                private:

                    /**
                     * Valid values: `0` (available for trial and purchase); `1` (available for purchase only after failed trial review or trial expiration); `2` (trial effective); `3` (Pro Edition effective); `4` (Pro Edition expired).
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_allCoresCnt;
                    bool m_allCoresCntHasBeenSet;

                    /**
                     * Total number of protected cores. It is the sum of the number of purchased cores, the number of free trial cores, and the number of elastic billing cores.
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_undefendCoresCnt;
                    bool m_undefendCoresCntHasBeenSet;

                    /**
                     * Number of purchased cores
                     */
                    uint64_t m_authorizedCoresCnt;
                    bool m_authorizedCoresCntHasBeenSet;

                    /**
                     * Number of free trial cores for Pro Edition.
                     */
                    int64_t m_givenAuthorizedCoresCnt;
                    bool m_givenAuthorizedCoresCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_currentFlexibleCoresCnt;
                    bool m_currentFlexibleCoresCntHasBeenSet;

                    /**
                     * Image count
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of licensed images
                     */
                    uint64_t m_authorizedImageCnt;
                    bool m_authorizedImageCntHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * Number of purchased image licenses
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * 0 indicates the default status (it has not been set by the user, namely the initial status); 1 indicates automatic renewal; 2 indicates explicit non-automatic renewal (it has been set by the user).
                     */
                    int64_t m_automaticRenewal;
                    bool m_automaticRenewalHasBeenSet;

                    /**
                     * Complimentary image licenses during the trial period may expire.
                     */
                    uint64_t m_givenAuthorizedCnt;
                    bool m_givenAuthorizedCntHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Substatus (specific meaning depending on the State field)
Valid values when State is 4: ISOLATE, TERMINATED.
                     */
                    std::string m_subState;
                    bool m_subStateHasBeenSet;

                    /**
                     * Billing key.
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_defendPolicy;
                    bool m_defendPolicyHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_flexibleCoresLimit;
                    bool m_flexibleCoresLimitHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_defendClusterCoresCnt;
                    bool m_defendClusterCoresCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_defendHostCoresCnt;
                    bool m_defendHostCoresCntHasBeenSet;

                    /**
                     * Number of trial cores for Pro Edition.
                     */
                    uint64_t m_trialCoresCnt;
                    bool m_trialCoresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
