/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyZone response structure.
                */
                class ModifyZoneResponse : public AbstractModel
                {
                public:
                    ModifyZoneResponse();
                    ~ModifyZoneResponse() = default;
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
                     * 获取Name server used by the site
                     * @return OriginalNameServers Name server used by the site
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取Site status.
- `pending`: The name server is not connected.
- `active`: The name server is connected.
- `moved`: The name server is moved.
                     * @return Status Site status.
- `pending`: The name server is not connected.
- `active`: The name server is connected.
- `moved`: The name server is moved.
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
                     * 获取Specifies how the site is connected to EdgeOne.
- `full`: Connect via the name server.
- `partial`: Connect via the CNAME.
                     * @return Type Specifies how the site is connected to EdgeOne.
- `full`: Connect via the name server.
- `partial`: Connect via the CNAME.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取List of name servers assigned by Tencent Cloud
                     * @return NameServers List of name servers assigned by Tencent Cloud
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedOn Creation time
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

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

                    /**
                     * 获取CNAME access status.
- `finished`: Ownership of the site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CnameStatus CNAME access status.
- `finished`: Ownership of the site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

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
                     * Name server used by the site
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * Site status.
- `pending`: The name server is not connected.
- `active`: The name server is connected.
- `moved`: The name server is moved.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies how the site is connected to EdgeOne.
- `full`: Connect via the name server.
- `partial`: Connect via the CNAME.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of name servers assigned by Tencent Cloud
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * CNAME access status.
- `finished`: Ownership of the site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_
