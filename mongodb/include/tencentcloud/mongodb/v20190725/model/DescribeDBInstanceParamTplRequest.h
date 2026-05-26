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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTpl request structure.
                */
                class DescribeDBInstanceParamTplRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplRequest();
                    ~DescribeDBInstanceParamTplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * @return TplIds Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * 
                     */
                    std::vector<std::string> GetTplIds() const;

                    /**
                     * 设置Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * @param _tplIds Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * 
                     */
                    void SetTplIds(const std::vector<std::string>& _tplIds);

                    /**
                     * 判断参数 TplIds 是否已赋值
                     * @return TplIds 是否已赋值
                     * 
                     */
                    bool TplIdsHasBeenSet() const;

                    /**
                     * 获取Specifies the template name for query.
                     * @return TplNames Specifies the template name for query.
                     * 
                     */
                    std::vector<std::string> GetTplNames() const;

                    /**
                     * 设置Specifies the template name for query.
                     * @param _tplNames Specifies the template name for query.
                     * 
                     */
                    void SetTplNames(const std::vector<std::string>& _tplNames);

                    /**
                     * 判断参数 TplNames 是否已赋值
                     * @return TplNames 是否已赋值
                     * 
                     */
                    bool TplNamesHasBeenSet() const;

                    /**
                     * 获取Specifies the database version number of the parameter template to query. For supported versions, use the [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @return MongoVersion Specifies the database version number of the parameter template to query. For supported versions, use the [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * 
                     */
                    std::vector<std::string> GetMongoVersion() const;

                    /**
                     * 设置Specifies the database version number of the parameter template to query. For supported versions, use the [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @param _mongoVersion Specifies the database version number of the parameter template to query. For supported versions, use the [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * 
                     */
                    void SetMongoVersion(const std::vector<std::string>& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Specifies the template type for query.
-DEFAULT: System default template.
-CUSTOMIZE: custom template.
                     * @return TplType Specifies the template type for query.
-DEFAULT: System default template.
-CUSTOMIZE: custom template.
                     * 
                     */
                    std::string GetTplType() const;

                    /**
                     * 设置Specifies the template type for query.
-DEFAULT: System default template.
-CUSTOMIZE: custom template.
                     * @param _tplType Specifies the template type for query.
-DEFAULT: System default template.
-CUSTOMIZE: custom template.
                     * 
                     */
                    void SetTplType(const std::string& _tplType);

                    /**
                     * 判断参数 TplType 是否已赋值
                     * @return TplType 是否已赋值
                     * 
                     */
                    bool TplTypeHasBeenSet() const;

                private:

                    /**
                     * Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     */
                    std::vector<std::string> m_tplIds;
                    bool m_tplIdsHasBeenSet;

                    /**
                     * Specifies the template name for query.
                     */
                    std::vector<std::string> m_tplNames;
                    bool m_tplNamesHasBeenSet;

                    /**
                     * Specifies the database version number of the parameter template to query. For supported versions, use the [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     */
                    std::vector<std::string> m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Specifies the template type for query.
-DEFAULT: System default template.
-CUSTOMIZE: custom template.
                     */
                    std::string m_tplType;
                    bool m_tplTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_
