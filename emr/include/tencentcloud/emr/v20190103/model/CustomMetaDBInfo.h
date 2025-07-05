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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * The user-created Hive-MetaDB instance information.
                */
                class CustomMetaDBInfo : public AbstractModel
                {
                public:
                    CustomMetaDBInfo();
                    ~CustomMetaDBInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The JDBC URL of the custom metadatabase instance. Example: jdbc:mysql://10.10.10.10:3306/dbname
                     * @return MetaDataJdbcUrl The JDBC URL of the custom metadatabase instance. Example: jdbc:mysql://10.10.10.10:3306/dbname
                     * 
                     */
                    std::string GetMetaDataJdbcUrl() const;

                    /**
                     * 设置The JDBC URL of the custom metadatabase instance. Example: jdbc:mysql://10.10.10.10:3306/dbname
                     * @param _metaDataJdbcUrl The JDBC URL of the custom metadatabase instance. Example: jdbc:mysql://10.10.10.10:3306/dbname
                     * 
                     */
                    void SetMetaDataJdbcUrl(const std::string& _metaDataJdbcUrl);

                    /**
                     * 判断参数 MetaDataJdbcUrl 是否已赋值
                     * @return MetaDataJdbcUrl 是否已赋值
                     * 
                     */
                    bool MetaDataJdbcUrlHasBeenSet() const;

                    /**
                     * 获取The custom metadatabase instance username.
                     * @return MetaDataUser The custom metadatabase instance username.
                     * 
                     */
                    std::string GetMetaDataUser() const;

                    /**
                     * 设置The custom metadatabase instance username.
                     * @param _metaDataUser The custom metadatabase instance username.
                     * 
                     */
                    void SetMetaDataUser(const std::string& _metaDataUser);

                    /**
                     * 判断参数 MetaDataUser 是否已赋值
                     * @return MetaDataUser 是否已赋值
                     * 
                     */
                    bool MetaDataUserHasBeenSet() const;

                    /**
                     * 获取The custom metadatabase instance password.
                     * @return MetaDataPass The custom metadatabase instance password.
                     * 
                     */
                    std::string GetMetaDataPass() const;

                    /**
                     * 设置The custom metadatabase instance password.
                     * @param _metaDataPass The custom metadatabase instance password.
                     * 
                     */
                    void SetMetaDataPass(const std::string& _metaDataPass);

                    /**
                     * 判断参数 MetaDataPass 是否已赋值
                     * @return MetaDataPass 是否已赋值
                     * 
                     */
                    bool MetaDataPassHasBeenSet() const;

                    /**
                     * 获取The Hive-shared metadatabase type. Valid values:
<li>`EMR_DEFAULT_META`: The cluster creates one by default.</li>
<li>`EMR_EXIST_META`: The cluster uses the specified EMR metadatabase instance.</li>
<li>`USER_CUSTOM_META`: The cluster uses a custom metadatabase instance.</li>
                     * @return MetaType The Hive-shared metadatabase type. Valid values:
<li>`EMR_DEFAULT_META`: The cluster creates one by default.</li>
<li>`EMR_EXIST_META`: The cluster uses the specified EMR metadatabase instance.</li>
<li>`USER_CUSTOM_META`: The cluster uses a custom metadatabase instance.</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置The Hive-shared metadatabase type. Valid values:
<li>`EMR_DEFAULT_META`: The cluster creates one by default.</li>
<li>`EMR_EXIST_META`: The cluster uses the specified EMR metadatabase instance.</li>
<li>`USER_CUSTOM_META`: The cluster uses a custom metadatabase instance.</li>
                     * @param _metaType The Hive-shared metadatabase type. Valid values:
<li>`EMR_DEFAULT_META`: The cluster creates one by default.</li>
<li>`EMR_EXIST_META`: The cluster uses the specified EMR metadatabase instance.</li>
<li>`USER_CUSTOM_META`: The cluster uses a custom metadatabase instance.</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取The EMR-MetaDB instance.
                     * @return UnifyMetaInstanceId The EMR-MetaDB instance.
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置The EMR-MetaDB instance.
                     * @param _unifyMetaInstanceId The EMR-MetaDB instance.
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                private:

                    /**
                     * The JDBC URL of the custom metadatabase instance. Example: jdbc:mysql://10.10.10.10:3306/dbname
                     */
                    std::string m_metaDataJdbcUrl;
                    bool m_metaDataJdbcUrlHasBeenSet;

                    /**
                     * The custom metadatabase instance username.
                     */
                    std::string m_metaDataUser;
                    bool m_metaDataUserHasBeenSet;

                    /**
                     * The custom metadatabase instance password.
                     */
                    std::string m_metaDataPass;
                    bool m_metaDataPassHasBeenSet;

                    /**
                     * The Hive-shared metadatabase type. Valid values:
<li>`EMR_DEFAULT_META`: The cluster creates one by default.</li>
<li>`EMR_EXIST_META`: The cluster uses the specified EMR metadatabase instance.</li>
<li>`USER_CUSTOM_META`: The cluster uses a custom metadatabase instance.</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * The EMR-MetaDB instance.
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_
