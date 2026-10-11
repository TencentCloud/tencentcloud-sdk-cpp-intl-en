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
                * User-defined database information.
                */
                class CustomMetaDBInfo : public AbstractModel
                {
                public:
                    CustomMetaDBInfo();
                    ~CustomMetaDBInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom MetaDB JDBC connection, for example: jdbc:mysql://10.10.10.10:3306/dbname.</p>
                     * @return MetaDataJdbcUrl <p>Custom MetaDB JDBC connection, for example: jdbc:mysql://10.10.10.10:3306/dbname.</p>
                     * 
                     */
                    std::string GetMetaDataJdbcUrl() const;

                    /**
                     * 设置<p>Custom MetaDB JDBC connection, for example: jdbc:mysql://10.10.10.10:3306/dbname.</p>
                     * @param _metaDataJdbcUrl <p>Custom MetaDB JDBC connection, for example: jdbc:mysql://10.10.10.10:3306/dbname.</p>
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
                     * 获取<p>Custom MetaDB username.</p>
                     * @return MetaDataUser <p>Custom MetaDB username.</p>
                     * 
                     */
                    std::string GetMetaDataUser() const;

                    /**
                     * 设置<p>Custom MetaDB username.</p>
                     * @param _metaDataUser <p>Custom MetaDB username.</p>
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
                     * 获取<p>Custom MetaDB password.</p>
                     * @return MetaDataPass <p>Custom MetaDB password.</p>
                     * 
                     */
                    std::string GetMetaDataPass() const;

                    /**
                     * 设置<p>Custom MetaDB password.</p>
                     * @param _metaDataPass <p>Custom MetaDB password.</p>
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
                     * 获取<p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @return MetaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @param _metaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
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
                     * 获取<p>EMR-MetaDB instance.</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB instance.</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Component.</p>
                     * @return Components <p>Component.</p>
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置<p>Component.</p>
                     * @param _components <p>Component.</p>
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>MetaDB version.</p>
                     * @return DefaultMetaVersion <p>MetaDB version.</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>MetaDB version.</p>
                     * @param _defaultMetaVersion <p>MetaDB version.</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>CDBId</p>
                     * @return LinkInstanceId <p>CDBId</p>
                     * 
                     */
                    std::string GetLinkInstanceId() const;

                    /**
                     * 设置<p>CDBId</p>
                     * @param _linkInstanceId <p>CDBId</p>
                     * 
                     */
                    void SetLinkInstanceId(const std::string& _linkInstanceId);

                    /**
                     * 判断参数 LinkInstanceId 是否已赋值
                     * @return LinkInstanceId 是否已赋值
                     * 
                     */
                    bool LinkInstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Custom MetaDB JDBC connection, for example: jdbc:mysql://10.10.10.10:3306/dbname.</p>
                     */
                    std::string m_metaDataJdbcUrl;
                    bool m_metaDataJdbcUrlHasBeenSet;

                    /**
                     * <p>Custom MetaDB username.</p>
                     */
                    std::string m_metaDataUser;
                    bool m_metaDataUserHasBeenSet;

                    /**
                     * <p>Custom MetaDB password.</p>
                     */
                    std::string m_metaDataPass;
                    bool m_metaDataPassHasBeenSet;

                    /**
                     * <p>Hive shared metadata database type. Valid values:</p><li>EMR_DEFAULT_META: created by the cluster by default</li><li>EMR_EXIST_META: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB instance.</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>Component.</p>
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>MetaDB version.</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>CDBId</p>
                     */
                    std::string m_linkInstanceId;
                    bool m_linkInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_
