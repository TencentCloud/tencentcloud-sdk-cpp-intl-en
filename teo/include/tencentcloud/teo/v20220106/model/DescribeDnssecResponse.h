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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSSECRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSSECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DnssecInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDnssec response structure.
                */
                class DescribeDnssecResponse : public AbstractModel
                {
                public:
                    DescribeDnssecResponse();
                    ~DescribeDnssecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return Id Site ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取DNSSEC status. Valid values:
- `enabled`: Enabled
- `disabled`: Disabled
                     * @return Status DNSSEC status. Valid values:
- `enabled`: Enabled
- `disabled`: Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return Dnssec 
                     * 
                     */
                    DnssecInfo GetDnssec() const;

                    /**
                     * 判断参数 Dnssec 是否已赋值
                     * @return Dnssec 是否已赋值
                     * 
                     */
                    bool DnssecHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifiedOn Modification time
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNSSEC status. Valid values:
- `enabled`: Enabled
- `disabled`: Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    DnssecInfo m_dnssec;
                    bool m_dnssecHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSSECRESPONSE_H_
