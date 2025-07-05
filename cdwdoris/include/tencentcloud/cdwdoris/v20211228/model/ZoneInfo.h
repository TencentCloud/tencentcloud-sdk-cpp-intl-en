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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Availability zone description
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone name, such as ap-guangzhou-1
                     * @return Name Availability zone name, such as ap-guangzhou-1
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Availability zone name, such as ap-guangzhou-1
                     * @param _name Availability zone name, such as ap-guangzhou-1
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
                     * 获取Availability zone description, such as Guangzhou region 1
                     * @return Desc Availability zone description, such as Guangzhou region 1
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Availability zone description, such as Guangzhou region 1
                     * @param _desc Availability zone description, such as Guangzhou region 1
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Unique tag of the availability zone
                     * @return ZoneId Unique tag of the availability zone
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Unique tag of the availability zone
                     * @param _zoneId Unique tag of the availability zone
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Encryptid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Encrypt Encryptid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEncrypt() const;

                    /**
                     * 设置Encryptid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encrypt Encryptid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncrypt(const int64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                private:

                    /**
                     * Availability zone name, such as ap-guangzhou-1
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Availability zone description, such as Guangzhou region 1
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Unique tag of the availability zone
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Encryptid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_
