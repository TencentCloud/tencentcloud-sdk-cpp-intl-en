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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETAINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETAINFO_H_

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
                * User-created Hive-MetaDB instance information
                */
                class CustomMetaInfo : public AbstractModel
                {
                public:
                    CustomMetaInfo();
                    ~CustomMetaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取JDBC connection to custom MetaDB instance beginning with `jdbc:mysql://`
                     * @return MetaDataJdbcUrl JDBC connection to custom MetaDB instance beginning with `jdbc:mysql://`
                     * 
                     */
                    std::string GetMetaDataJdbcUrl() const;

                    /**
                     * 设置JDBC connection to custom MetaDB instance beginning with `jdbc:mysql://`
                     * @param _metaDataJdbcUrl JDBC connection to custom MetaDB instance beginning with `jdbc:mysql://`
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
                     * 获取Custom MetaDB instance username
                     * @return MetaDataUser Custom MetaDB instance username
                     * 
                     */
                    std::string GetMetaDataUser() const;

                    /**
                     * 设置Custom MetaDB instance username
                     * @param _metaDataUser Custom MetaDB instance username
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
                     * 获取Custom MetaDB instance password
                     * @return MetaDataPass Custom MetaDB instance password
                     * 
                     */
                    std::string GetMetaDataPass() const;

                    /**
                     * 设置Custom MetaDB instance password
                     * @param _metaDataPass Custom MetaDB instance password
                     * 
                     */
                    void SetMetaDataPass(const std::string& _metaDataPass);

                    /**
                     * 判断参数 MetaDataPass 是否已赋值
                     * @return MetaDataPass 是否已赋值
                     * 
                     */
                    bool MetaDataPassHasBeenSet() const;

                private:

                    /**
                     * JDBC connection to custom MetaDB instance beginning with `jdbc:mysql://`
                     */
                    std::string m_metaDataJdbcUrl;
                    bool m_metaDataJdbcUrlHasBeenSet;

                    /**
                     * Custom MetaDB instance username
                     */
                    std::string m_metaDataUser;
                    bool m_metaDataUserHasBeenSet;

                    /**
                     * Custom MetaDB instance password
                     */
                    std::string m_metaDataPass;
                    bool m_metaDataPassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETAINFO_H_
