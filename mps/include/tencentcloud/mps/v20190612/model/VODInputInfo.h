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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_

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
                * VOD Pro object information for MPS.
                */
                class VODInputInfo : public AbstractModel
                {
                public:
                    VODInputInfo();
                    ~VODInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the Bucket ID where the input file resides.
                     * @return Bucket Specifies the Bucket ID where the input file resides.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Specifies the Bucket ID where the input file resides.
                     * @param _bucket Specifies the Bucket ID where the input file resides.
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
                     * 获取Specifies the region where the input file's Bucket resides.
                     * @return Region Specifies the region where the input file's Bucket resides.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Specifies the region where the input file's Bucket resides.
                     * @param _region Specifies the region where the input file's Bucket resides.
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
                     * 获取Path of the input file.
                     * @return Object Path of the input file.
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置Path of the input file.
                     * @param _object Path of the input file.
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

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
                     * Specifies the Bucket ID where the input file resides.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Specifies the region where the input file's Bucket resides.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Path of the input file.
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

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

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
