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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyGroupInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCdbProxyInfo response structure.
                */
                class DescribeCdbProxyInfoResponse : public AbstractModel
                {
                public:
                    DescribeCdbProxyInfoResponse();
                    ~DescribeCdbProxyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of proxy groups Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Number of proxy groups Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Proxy group information Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyInfos Proxy group information Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyGroupInfo> GetProxyInfos() const;

                    /**
                     * 判断参数 ProxyInfos 是否已赋值
                     * @return ProxyInfos 是否已赋值
                     * 
                     */
                    bool ProxyInfosHasBeenSet() const;

                private:

                    /**
                     * Number of proxy groups Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Proxy group information Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyGroupInfo> m_proxyInfos;
                    bool m_proxyInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYINFORESPONSE_H_
