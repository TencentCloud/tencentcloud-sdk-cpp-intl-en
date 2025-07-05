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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ESPUBLICACL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ESPUBLICACL_H_

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
                * Public network ACL information of ES
                */
                class EsPublicAcl : public AbstractModel
                {
                public:
                    EsPublicAcl();
                    ~EsPublicAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access blocklist
                     * @return BlackIpList Access blocklist
                     * 
                     */
                    std::vector<std::string> GetBlackIpList() const;

                    /**
                     * 设置Access blocklist
                     * @param _blackIpList Access blocklist
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
                     * 获取Access allowlist
                     * @return WhiteIpList Access allowlist
                     * 
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 设置Access allowlist
                     * @param _whiteIpList Access allowlist
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
                     * Access blocklist
                     */
                    std::vector<std::string> m_blackIpList;
                    bool m_blackIpListHasBeenSet;

                    /**
                     * Access allowlist
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESPUBLICACL_H_
