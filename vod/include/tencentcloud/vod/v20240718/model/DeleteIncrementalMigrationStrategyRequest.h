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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * DeleteIncrementalMigrationStrategy request structure.
                */
                class DeleteIncrementalMigrationStrategyRequest : public AbstractModel
                {
                public:
                    DeleteIncrementalMigrationStrategyRequest();
                    ~DeleteIncrementalMigrationStrategyRequest() = default;
                    std::string ToJsonString() const;


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

                private:

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
                     * The ID of the incremental migration strategy.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
