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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * VOD Pro output object information for MPS.
                */
                class VODOutputStorage : public AbstractModel
                {
                public:
                    VODOutputStorage();
                    ~VODOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the destination Bucket ID for the generated output file of MPS.
                     * @return Bucket Specifies the destination Bucket ID for the generated output file of MPS.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Specifies the destination Bucket ID for the generated output file of MPS.
                     * @param _bucket Specifies the destination Bucket ID for the generated output file of MPS.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Specifies the region of the target Bucket for the output.
                     * @return Region Specifies the region of the target Bucket for the output.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region of the target Bucket for the output.
                     * @param _region Specifies the region of the target Bucket for the output.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取VOD Pro application Id.
                     * @return SubAppId VOD Pro application Id.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD Pro application Id.
                     * @param _subAppId VOD Pro application Id.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the destination Bucket ID for the generated output file of MPS.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Specifies the region of the target Bucket for the output.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VOD Pro application Id.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_
