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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * The structure is used to input the key of the alarm to update the alarm status.
                */
                class NewAlertKey : public AbstractModel
                {
                public:
                    NewAlertKey();
                    ~NewAlertKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User AppID to Be Changed
                     * @return AppId User AppID to Be Changed
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppID to Be Changed
                     * @param _appId User AppID to Be Changed
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Alarm category
                     * @return Type Alarm category
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alarm category
                     * @param _type Alarm category
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
                     * 获取Alarm Subcategory
                     * @return SubType Alarm Subcategory
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置Alarm Subcategory
                     * @param _subType Alarm Subcategory
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Alarm source
                     * @return Source Alarm source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Alarm source
                     * @param _source Alarm source
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Alarm name
                     * @return Name Alarm name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm name
                     * @param _name Alarm name
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
                     * 获取Alarm Key
                     * @return Key Alarm Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Alarm Key
                     * @param _key Alarm Key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Time
                     * @return Date Time
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Time
                     * @param _date Time
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * User AppID to Be Changed
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Alarm category
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm Subcategory
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Alarm source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Alarm name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Alarm Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Time
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_
