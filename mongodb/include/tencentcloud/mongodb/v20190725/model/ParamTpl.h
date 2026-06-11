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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Database parameter template
                */
                class ParamTpl : public AbstractModel
                {
                public:
                    ParamTpl();
                    ~ParamTpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Parameter template ID.
                     * @return TplId Parameter template ID.
                     * 
                     */
                    std::string GetTplId() const;

                    /**
                     * 设置Parameter template ID.
                     * @param _tplId Parameter template ID.
                     * 
                     */
                    void SetTplId(const std::string& _tplId);

                    /**
                     * 判断参数 TplId 是否已赋值
                     * @return TplId 是否已赋值
                     * 
                     */
                    bool TplIdHasBeenSet() const;

                    /**
                     * 获取Database versions applicable to the parameter template.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @return MongoVersion Database versions applicable to the parameter template.
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
                     * 设置Database versions applicable to the parameter template.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @param _mongoVersion Database versions applicable to the parameter template.
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
                     * 获取Database type that the parameter template applies to.
- REPLSET: replica set instance.
- SHARD: shard instance.
- STANDALONE: Single-node instance.
                     * @return ClusterType Database type that the parameter template applies to.
- REPLSET: replica set instance.
- SHARD: shard instance.
- STANDALONE: Single-node instance.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Database type that the parameter template applies to.
- REPLSET: replica set instance.
- SHARD: shard instance.
- STANDALONE: Single-node instance.
                     * @param _clusterType Database type that the parameter template applies to.
- REPLSET: replica set instance.
- SHARD: shard instance.
- STANDALONE: Single-node instance.
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
                     * 获取Parameter template description.
                     * @return TplDesc Parameter template description.
                     * 
                     */
                    std::string GetTplDesc() const;

                    /**
                     * 设置Parameter template description.
                     * @param _tplDesc Parameter template description.
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
                     * 获取Template type.
- DEFAULT: System default template.
- CUSTOMIZE: custom template.
                     * @return TplType Template type.
- DEFAULT: System default template.
- CUSTOMIZE: custom template.
                     * 
                     */
                    std::string GetTplType() const;

                    /**
                     * 设置Template type.
- DEFAULT: System default template.
- CUSTOMIZE: custom template.
                     * @param _tplType Template type.
- DEFAULT: System default template.
- CUSTOMIZE: custom template.
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
                     * Parameter template name.
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * Parameter template ID.
                     */
                    std::string m_tplId;
                    bool m_tplIdHasBeenSet;

                    /**
                     * Database versions applicable to the parameter template.
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
                     * Database type that the parameter template applies to.
- REPLSET: replica set instance.
- SHARD: shard instance.
- STANDALONE: Single-node instance.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Parameter template description.
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * Template type.
- DEFAULT: System default template.
- CUSTOMIZE: custom template.
                     */
                    std::string m_tplType;
                    bool m_tplTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_
