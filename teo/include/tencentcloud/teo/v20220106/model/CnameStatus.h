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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CNAMESTATUS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CNAMESTATUS_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CNAME status
                */
                class CnameStatus : public AbstractModel
                {
                public:
                    CnameStatus();
                    ~CnameStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record name
                     * @return Name Record name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Record name
                     * @param _name Record name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cname CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _cname CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Status
`active`: Activated
`moved`: Not activated
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Status
`active`: Activated
`moved`: Not activated
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
`active`: Activated
`moved`: Not activated
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _status Status
`active`: Activated
`moved`: Not activated
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Record name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Status
`active`: Activated
`moved`: Not activated
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CNAMESTATUS_H_
