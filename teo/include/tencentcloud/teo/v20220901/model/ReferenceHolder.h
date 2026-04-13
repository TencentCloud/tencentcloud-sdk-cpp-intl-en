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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REFERENCEHOLDER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REFERENCEHOLDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Referenced instance information.
                */
                class ReferenceHolder : public AbstractModel
                {
                public:
                    ReferenceHolder();
                    ~ReferenceHolder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance type. Values as follows:
<li>acceleration-domain: Acceleration domain name;</li>
                     * @return Type Instance type. Values as follows:
<li>acceleration-domain: Acceleration domain name;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type. Values as follows:
<li>acceleration-domain: Acceleration domain name;</li>
                     * @param _type Instance type. Values as follows:
<li>acceleration-domain: Acceleration domain name;</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Referenced instance information.
                     * @return Instance Referenced instance information.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置Referenced instance information.
                     * @param _instance Referenced instance information.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance type. Values as follows:
<li>acceleration-domain: Acceleration domain name;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Referenced instance information.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REFERENCEHOLDER_H_
