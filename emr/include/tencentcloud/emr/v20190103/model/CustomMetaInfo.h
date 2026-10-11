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
                * User-built Hive-MetaDB information.
                */
                class CustomMetaInfo : public AbstractModel
                {
                public:
                    CustomMetaInfo();
                    ~CustomMetaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom MetaDB JDBC connection, which starts with jdbc:mysql://.
                     * @return MetaDataJdbcUrl Custom MetaDB JDBC connection, which starts with jdbc:mysql://.
                     * 
                     */
                    std::string GetMetaDataJdbcUrl() const;

                    /**
                     * 设置Custom MetaDB JDBC connection, which starts with jdbc:mysql://.
                     * @param _metaDataJdbcUrl Custom MetaDB JDBC connection, which starts with jdbc:mysql://.
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
                     * 获取Custom MetaDB username.
                     * @return MetaDataUser Custom MetaDB username.
                     * 
                     */
                    std::string GetMetaDataUser() const;

                    /**
                     * 设置Custom MetaDB username.
                     * @param _metaDataUser Custom MetaDB username.
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
                     * 获取Custom MetaDB password.
                     * @return MetaDataPass Custom MetaDB password.
                     * 
                     */
                    std::string GetMetaDataPass() const;

                    /**
                     * 设置Custom MetaDB password.
                     * @param _metaDataPass Custom MetaDB password.
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
                     * Custom MetaDB JDBC connection, which starts with jdbc:mysql://.
                     */
                    std::string m_metaDataJdbcUrl;
                    bool m_metaDataJdbcUrlHasBeenSet;

                    /**
                     * Custom MetaDB username.
                     */
                    std::string m_metaDataUser;
                    bool m_metaDataUserHasBeenSet;

                    /**
                     * Custom MetaDB password.
                     */
                    std::string m_metaDataPass;
                    bool m_metaDataPassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETAINFO_H_
