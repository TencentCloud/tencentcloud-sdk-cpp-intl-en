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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_BUCKETINFO_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_BUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Bucket information
See the basic concepts at https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1
                */
                class BucketInfo : public AbstractModel
                {
                public:
                    BucketInfo();
                    ~BucketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field indicates a bucket name in Tencent Cloud COS. For more information on buckets, see Basic Concepts (https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bucket This field indicates a bucket name in Tencent Cloud COS. For more information on buckets, see Basic Concepts (https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置This field indicates a bucket name in Tencent Cloud COS. For more information on buckets, see Basic Concepts (https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bucket This field indicates a bucket name in Tencent Cloud COS. For more information on buckets, see Basic Concepts (https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field indicates a region where a Tencent Cloud COS managed data center is deployed. COS data is stored in buckets in these regions. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region This field indicates a region where a Tencent Cloud COS managed data center is deployed. COS data is stored in buckets in these regions. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置This field indicates a region where a Tencent Cloud COS managed data center is deployed. COS data is stored in buckets in these regions. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _region This field indicates a region where a Tencent Cloud COS managed data center is deployed. COS data is stored in buckets in these regions. 
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field indicates an object key in Tencent Cloud COS. Object z is stored in a bucket as a basic storage unit. You can manage objects through the Tencent Cloud console, API, or SDK. For more information on objects, see Object Overview (https://intl.cloud.tencent.com/document/product/436/13324?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Object This field indicates an object key in Tencent Cloud COS. Object z is stored in a bucket as a basic storage unit. You can manage objects through the Tencent Cloud console, API, or SDK. For more information on objects, see Object Overview (https://intl.cloud.tencent.com/document/product/436/13324?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置This field indicates an object key in Tencent Cloud COS. Object z is stored in a bucket as a basic storage unit. You can manage objects through the Tencent Cloud console, API, or SDK. For more information on objects, see Object Overview (https://intl.cloud.tencent.com/document/product/436/13324?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _object This field indicates an object key in Tencent Cloud COS. Object z is stored in a bucket as a basic storage unit. You can manage objects through the Tencent Cloud console, API, or SDK. For more information on objects, see Object Overview (https://intl.cloud.tencent.com/document/product/436/13324?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                private:

                    /**
                     * This field indicates a bucket name in Tencent Cloud COS. For more information on buckets, see Basic Concepts (https://intl.cloud.tencent.com/document/product/436/44352?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * This field indicates a region where a Tencent Cloud COS managed data center is deployed. COS data is stored in buckets in these regions. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * This field indicates an object key in Tencent Cloud COS. Object z is stored in a bucket as a basic storage unit. You can manage objects through the Tencent Cloud console, API, or SDK. For more information on objects, see Object Overview (https://intl.cloud.tencent.com/document/product/436/13324?from_cn_redirect=1). 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_BUCKETINFO_H_
