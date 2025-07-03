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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONSTRATEGYINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONSTRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration strategy information.
                */
                class IncrementalMigrationStrategyInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationStrategyInfo();
                    ~IncrementalMigrationStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the incremental migration strategy.
                     * @return StrategyId The ID of the incremental migration strategy.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置The ID of the incremental migration strategy.
                     * @param _strategyId The ID of the incremental migration strategy.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取The name of the incremental migration strategy.
                     * @return StrategyName The name of the incremental migration strategy.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置The name of the incremental migration strategy.
                     * @param _strategyName The name of the incremental migration strategy.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @return SubAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @param _subAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The bucket ID where the strategy takes effect.
                     * @return BucketId The bucket ID where the strategy takes effect.
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置The bucket ID where the strategy takes effect.
                     * @param _bucketId The bucket ID where the strategy takes effect.
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取Source type.
                     * @return OriginType Source type.
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Source type.
                     * @param _originType Source type.
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Incremental migration HTTP origin source configuration.
                     * @return HttpOriginConfig Incremental migration HTTP origin source configuration.
                     * 
                     */
                    IncrementalMigrationHttpOriginConfig GetHttpOriginConfig() const;

                    /**
                     * 设置Incremental migration HTTP origin source configuration.
                     * @param _httpOriginConfig Incremental migration HTTP origin source configuration.
                     * 
                     */
                    void SetHttpOriginConfig(const IncrementalMigrationHttpOriginConfig& _httpOriginConfig);

                    /**
                     * 判断参数 HttpOriginConfig 是否已赋值
                     * @return HttpOriginConfig 是否已赋值
                     * 
                     */
                    bool HttpOriginConfigHasBeenSet() const;

                private:

                    /**
                     * The ID of the incremental migration strategy.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * The name of the incremental migration strategy.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The bucket ID where the strategy takes effect.
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * Source type.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Incremental migration HTTP origin source configuration.
                     */
                    IncrementalMigrationHttpOriginConfig m_httpOriginConfig;
                    bool m_httpOriginConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONSTRATEGYINFO_H_
