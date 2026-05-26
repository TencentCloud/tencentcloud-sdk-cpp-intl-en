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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ParamType.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateDBInstanceParamTpl request structure.
                */
                class CreateDBInstanceParamTplRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceParamTplRequest();
                    ~CreateDBInstanceParamTplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter template name.
                     * @return TplName Parameter template name.
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置Parameter template name.
                     * @param _tplName Parameter template name.
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取Template version number. This field is required when **MirrorTplId** is empty. For the purchasable versions supported by the parameter template, use the interface [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/35767?from_cn_redirect=1).
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @return MongoVersion Template version number. This field is required when **MirrorTplId** is empty. For the purchasable versions supported by the parameter template, use the interface [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/35767?from_cn_redirect=1).
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
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Template version number. This field is required when **MirrorTplId** is empty. For the purchasable versions supported by the parameter template, use the interface [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/35767?from_cn_redirect=1).
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @param _mongoVersion Template version number. This field is required when **MirrorTplId** is empty. For the purchasable versions supported by the parameter template, use the interface [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/35767?from_cn_redirect=1).
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
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Instance type. This parameter is required when MirrorTplId is empty.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * @return ClusterType Instance type. This parameter is required when MirrorTplId is empty.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance type. This parameter is required when MirrorTplId is empty.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * @param _clusterType Instance type. This parameter is required when MirrorTplId is empty.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Template description information.
                     * @return TplDesc Template description information.
                     * 
                     */
                    std::string GetTplDesc() const;

                    /**
                     * 设置Template description information.
                     * @param _tplDesc Template description information.
                     * 
                     */
                    void SetTplDesc(const std::string& _tplDesc);

                    /**
                     * 判断参数 TplDesc 是否已赋值
                     * @return TplDesc 是否已赋值
                     * 
                     */
                    bool TplDescHasBeenSet() const;

                    /**
                     * 获取Template parameter. If this parameter is not configured, the system default template is used as the version parameter.
                     * @return Params Template parameter. If this parameter is not configured, the system default template is used as the version parameter.
                     * 
                     */
                    std::vector<ParamType> GetParams() const;

                    /**
                     * 设置Template parameter. If this parameter is not configured, the system default template is used as the version parameter.
                     * @param _params Template parameter. If this parameter is not configured, the system default template is used as the version parameter.
                     * 
                     */
                    void SetParams(const std::vector<ParamType>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Image template ID. If an image template is specified, a new template is cloned from this template.
**Note**: When MirrorTplId is not empty, MongoVersion and ClusterType will follow the template version and instance type of MirrorTpl.
                     * @return MirrorTplId Image template ID. If an image template is specified, a new template is cloned from this template.
**Note**: When MirrorTplId is not empty, MongoVersion and ClusterType will follow the template version and instance type of MirrorTpl.
                     * 
                     */
                    std::string GetMirrorTplId() const;

                    /**
                     * 设置Image template ID. If an image template is specified, a new template is cloned from this template.
**Note**: When MirrorTplId is not empty, MongoVersion and ClusterType will follow the template version and instance type of MirrorTpl.
                     * @param _mirrorTplId Image template ID. If an image template is specified, a new template is cloned from this template.
**Note**: When MirrorTplId is not empty, MongoVersion and ClusterType will follow the template version and instance type of MirrorTpl.
                     * 
                     */
                    void SetMirrorTplId(const std::string& _mirrorTplId);

                    /**
                     * 判断参数 MirrorTplId 是否已赋值
                     * @return MirrorTplId 是否已赋值
                     * 
                     */
                    bool MirrorTplIdHasBeenSet() const;

                private:

                    /**
                     * Parameter template name.
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * Template version number. This field is required when **MirrorTplId** is empty. For the purchasable versions supported by the parameter template, use the interface [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/35767?from_cn_redirect=1).
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Instance type. This parameter is required when MirrorTplId is empty.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Template description information.
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * Template parameter. If this parameter is not configured, the system default template is used as the version parameter.
                     */
                    std::vector<ParamType> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Image template ID. If an image template is specified, a new template is cloned from this template.
**Note**: When MirrorTplId is not empty, MongoVersion and ClusterType will follow the template version and instance type of MirrorTpl.
                     */
                    std::string m_mirrorTplId;
                    bool m_mirrorTplIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_
