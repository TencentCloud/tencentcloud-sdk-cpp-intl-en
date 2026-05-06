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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Kong gateway passive health check configuration
                */
                class KongPassiveHealthCheck : public AbstractModel
                {
                public:
                    KongPassiveHealthCheck();
                    ~KongPassiveHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backend target protocol type. Passive health check supports http and tcp. Proactive health check supports http.
                     * @return Type Backend target protocol type. Passive health check supports http and tcp. Proactive health check supports http.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Backend target protocol type. Passive health check supports http and tcp. Proactive health check supports http.
                     * @param _type Backend target protocol type. Passive health check supports http and tcp. Proactive health check supports http.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Backend target protocol type. Passive health check supports http and tcp. Proactive health check supports http.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_
