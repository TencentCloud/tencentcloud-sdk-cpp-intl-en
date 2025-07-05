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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyOriginGroup request structure.
                */
                class ModifyOriginGroupRequest : public AbstractModel
                {
                public:
                    ModifyOriginGroupRequest();
                    ~ModifyOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the origin group
                     * @return OriginId ID of the origin group
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置ID of the origin group
                     * @param _originId ID of the origin group
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Name of the origin group
                     * @return OriginName Name of the origin group
                     * 
                     */
                    std::string GetOriginName() const;

                    /**
                     * 设置Name of the origin group
                     * @param _originName Name of the origin group
                     * 
                     */
                    void SetOriginName(const std::string& _originName);

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     * 
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull configuration type. This field is required when `OriginType=self`.
`area`: Origin-pull by region
`weight`: Origin-pull by weight
When `OriginType=third_party/cos`, it can be left empty.
                     * @return Type Origin-pull configuration type. This field is required when `OriginType=self`.
`area`: Origin-pull by region
`weight`: Origin-pull by weight
When `OriginType=third_party/cos`, it can be left empty.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin-pull configuration type. This field is required when `OriginType=self`.
`area`: Origin-pull by region
`weight`: Origin-pull by weight
When `OriginType=third_party/cos`, it can be left empty.
                     * @param _type Origin-pull configuration type. This field is required when `OriginType=self`.
`area`: Origin-pull by region
`weight`: Origin-pull by weight
When `OriginType=third_party/cos`, it can be left empty.
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
                     * 获取Origin record
                     * @return Record Origin record
                     * 
                     */
                    std::vector<OriginRecord> GetRecord() const;

                    /**
                     * 设置Origin record
                     * @param _record Origin record
                     * 
                     */
                    void SetRecord(const std::vector<OriginRecord>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param _zoneId Site ID
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
                     * 获取Origin type
`self`: Customer origin
`third_party`: Third-party origin
`cos`: Tencent Cloud COS origin
                     * @return OriginType Origin type
`self`: Customer origin
`third_party`: Third-party origin
`cos`: Tencent Cloud COS origin
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin type
`self`: Customer origin
`third_party`: Third-party origin
`cos`: Tencent Cloud COS origin
                     * @param _originType Origin type
`self`: Customer origin
`third_party`: Third-party origin
`cos`: Tencent Cloud COS origin
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the origin group
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Name of the origin group
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * Origin-pull configuration type. This field is required when `OriginType=self`.
`area`: Origin-pull by region
`weight`: Origin-pull by weight
When `OriginType=third_party/cos`, it can be left empty.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin record
                     */
                    std::vector<OriginRecord> m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Origin type
`self`: Customer origin
`third_party`: Third-party origin
`cos`: Tencent Cloud COS origin
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYORIGINGROUPREQUEST_H_
