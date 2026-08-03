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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_EXTERNALACCESSINFOWRAPPER_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_EXTERNALACCESSINFOWRAPPER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/IpWhitelistDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Result object of the public network route IP allowlist for the instance
                */
                class ExternalAccessInfoWrapper : public AbstractModel
                {
                public:
                    ExternalAccessInfoWrapper();
                    ~ExternalAccessInfoWrapper() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of IP allowlist access rules</p>
                     * @return TotalCount <p>Number of IP allowlist access rules</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Number of IP allowlist access rules</p>
                     * @param _totalCount <p>Number of IP allowlist access rules</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>IP allowlist</p>
                     * @return IpWhitelist <p>IP allowlist</p>
                     * 
                     */
                    std::vector<IpWhitelistDTO> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP allowlist</p>
                     * @param _ipWhitelist <p>IP allowlist</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<IpWhitelistDTO>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p>Number of IP allowlist access rules</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>IP allowlist</p>
                     */
                    std::vector<IpWhitelistDTO> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_EXTERNALACCESSINFOWRAPPER_H_
