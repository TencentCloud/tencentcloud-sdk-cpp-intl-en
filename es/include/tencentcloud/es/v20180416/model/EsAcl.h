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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ESACL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ESACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cluster configuration item
                */
                class EsAcl : public AbstractModel
                {
                public:
                    EsAcl();
                    ~EsAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kibana access blocklist
                     * @return BlackIpList Kibana access blocklist
                     * 
                     */
                    std::vector<std::string> GetBlackIpList() const;

                    /**
                     * 设置Kibana access blocklist
                     * @param _blackIpList Kibana access blocklist
                     * 
                     */
                    void SetBlackIpList(const std::vector<std::string>& _blackIpList);

                    /**
                     * 判断参数 BlackIpList 是否已赋值
                     * @return BlackIpList 是否已赋值
                     * 
                     */
                    bool BlackIpListHasBeenSet() const;

                    /**
                     * 获取Kibana access allowlist
                     * @return WhiteIpList Kibana access allowlist
                     * 
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 设置Kibana access allowlist
                     * @param _whiteIpList Kibana access allowlist
                     * 
                     */
                    void SetWhiteIpList(const std::vector<std::string>& _whiteIpList);

                    /**
                     * 判断参数 WhiteIpList 是否已赋值
                     * @return WhiteIpList 是否已赋值
                     * 
                     */
                    bool WhiteIpListHasBeenSet() const;

                private:

                    /**
                     * Kibana access blocklist
                     */
                    std::vector<std::string> m_blackIpList;
                    bool m_blackIpListHasBeenSet;

                    /**
                     * Kibana access allowlist
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESACL_H_
