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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/OwnNumberApplyDetailItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateOwnNumberApply request structure.
                */
                class CreateOwnNumberApplyRequest : public AbstractModel
                {
                public:
                    CreateOwnNumberApplyRequest();
                    ~CreateOwnNumberApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取SIP connection id.
                     * @return SipTrunkId SIP connection id.
                     * 
                     */
                    int64_t GetSipTrunkId() const;

                    /**
                     * 设置SIP connection id.
                     * @param _sipTrunkId SIP connection id.
                     * 
                     */
                    void SetSipTrunkId(const int64_t& _sipTrunkId);

                    /**
                     * 判断参数 SipTrunkId 是否已赋值
                     * @return SipTrunkId 是否已赋值
                     * 
                     */
                    bool SipTrunkIdHasBeenSet() const;

                    /**
                     * 获取Circuit-Related parameters.
                     * @return DetailList Circuit-Related parameters.
                     * 
                     */
                    std::vector<OwnNumberApplyDetailItem> GetDetailList() const;

                    /**
                     * 设置Circuit-Related parameters.
                     * @param _detailList Circuit-Related parameters.
                     * 
                     */
                    void SetDetailList(const std::vector<OwnNumberApplyDetailItem>& _detailList);

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                    /**
                     * 获取Prefix for sending numbers.
                     * @return Prefix Prefix for sending numbers.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Prefix for sending numbers.
                     * @param _prefix Prefix for sending numbers.
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取Domestic long-distance mobile phone prefix.
                     * @return MobileNddPrefix Domestic long-distance mobile phone prefix.
                     * 
                     */
                    std::string GetMobileNddPrefix() const;

                    /**
                     * 设置Domestic long-distance mobile phone prefix.
                     * @param _mobileNddPrefix Domestic long-distance mobile phone prefix.
                     * 
                     */
                    void SetMobileNddPrefix(const std::string& _mobileNddPrefix);

                    /**
                     * 判断参数 MobileNddPrefix 是否已赋值
                     * @return MobileNddPrefix 是否已赋值
                     * 
                     */
                    bool MobileNddPrefixHasBeenSet() const;

                    /**
                     * 获取Removes the area code for local calls.
                     * @return LocalNumberTrimAC Removes the area code for local calls.
                     * 
                     */
                    bool GetLocalNumberTrimAC() const;

                    /**
                     * 设置Removes the area code for local calls.
                     * @param _localNumberTrimAC Removes the area code for local calls.
                     * 
                     */
                    void SetLocalNumberTrimAC(const bool& _localNumberTrimAC);

                    /**
                     * 判断参数 LocalNumberTrimAC 是否已赋值
                     * @return LocalNumberTrimAC 是否已赋值
                     * 
                     */
                    bool LocalNumberTrimACHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * SIP connection id.
                     */
                    int64_t m_sipTrunkId;
                    bool m_sipTrunkIdHasBeenSet;

                    /**
                     * Circuit-Related parameters.
                     */
                    std::vector<OwnNumberApplyDetailItem> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * Prefix for sending numbers.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Domestic long-distance mobile phone prefix.
                     */
                    std::string m_mobileNddPrefix;
                    bool m_mobileNddPrefixHasBeenSet;

                    /**
                     * Removes the area code for local calls.
                     */
                    bool m_localNumberTrimAC;
                    bool m_localNumberTrimACHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYREQUEST_H_
