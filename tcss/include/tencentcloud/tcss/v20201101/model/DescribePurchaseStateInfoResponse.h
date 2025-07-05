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
                     * 获取Total number of cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoresCnt Total number of cores
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of purchased cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizedCoresCnt Number of purchased cores
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of images
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageCnt Number of images
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizedImageCnt Number of licensed images
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of purchased image licenses
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PurchasedAuthorizedCnt Number of purchased image licenses
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationTime Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Valid values: `0` (initial status, which is the default value and not set by the user); `1` (auto-renewal); `2` (no auto-renewal, which is specified by the user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutomaticRenewal Valid values: `0` (initial status, which is the default value and not set by the user); `1` (auto-renewal); `2` (no auto-renewal, which is specified by the user).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of free image licenses during the trial, which may expire.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GivenAuthorizedCnt Number of free image licenses during the trial, which may expire.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Sub-status, the meaning of which is subject to the `State` field.
Valid values when `State` is `4`: `ISOLATE` (isolated); `DESTROED` (terminated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubState Sub-status, the meaning of which is subject to the `State` field.
Valid values when `State` is `4`: `ISOLATE` (isolated); `DESTROED` (terminated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubState() const;

                    /**
                     * 判断参数 SubState 是否已赋值
                     * @return SubState 是否已赋值
                     * 
                     */
                    bool SubStateHasBeenSet() const;

                private:

                    /**
                     * Valid values: `0` (available for trial and purchase); `1` (available for purchase only after failed trial review or trial expiration); `2` (trial effective); `3` (Pro Edition effective); `4` (Pro Edition expired).
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Total number of cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * Number of purchased cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_authorizedCoresCnt;
                    bool m_authorizedCoresCntHasBeenSet;

                    /**
                     * Number of images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * Number of licensed images
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_authorizedImageCnt;
                    bool m_authorizedImageCntHasBeenSet;

                    /**
                     * Number of purchased image licenses
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * Valid values: `0` (initial status, which is the default value and not set by the user); `1` (auto-renewal); `2` (no auto-renewal, which is specified by the user).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_automaticRenewal;
                    bool m_automaticRenewalHasBeenSet;

                    /**
                     * Number of free image licenses during the trial, which may expire.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_givenAuthorizedCnt;
                    bool m_givenAuthorizedCntHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Sub-status, the meaning of which is subject to the `State` field.
Valid values when `State` is `4`: `ISOLATE` (isolated); `DESTROED` (terminated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subState;
                    bool m_subStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
