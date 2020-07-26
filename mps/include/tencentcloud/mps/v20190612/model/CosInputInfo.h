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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COSINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COSINPUTINFO_H_

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
                * Information of the COS object for video processing.
                */
                class CosInputInfo : public AbstractModel
                {
                public:
                    CosInputInfo();
                    ~CosInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the COS bucket where a video processing object file is located, such as `TopRankVideo-125xxx88`.
                     * @return Bucket Name of the COS bucket where a video processing object file is located, such as `TopRankVideo-125xxx88`.
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Name of the COS bucket where a video processing object file is located, such as `TopRankVideo-125xxx88`.
                     * @param Bucket Name of the COS bucket where a video processing object file is located, such as `TopRankVideo-125xxx88`.
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Region of the COS bucket where a video processing object file is located, such as `ap-chongqing`.
                     * @return Region Region of the COS bucket where a video processing object file is located, such as `ap-chongqing`.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the COS bucket where a video processing object file is located, such as `ap-chongqing`.
                     * @param Region Region of the COS bucket where a video processing object file is located, such as `ap-chongqing`.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Path to an input object file for video processing, such as `/movie/201907/WildAnimal.mov`.
                     * @return Object Path to an input object file for video processing, such as `/movie/201907/WildAnimal.mov`.
                     */
                    std::string GetObject() const;

                    /**
                     * 设置Path to an input object file for video processing, such as `/movie/201907/WildAnimal.mov`.
                     * @param Object Path to an input object file for video processing, such as `/movie/201907/WildAnimal.mov`.
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     */
                    bool ObjectHasBeenSet() const;

                private:

                    /**
                     * Name of the COS bucket where a video processing object file is located, such as `TopRankVideo-125xxx88`.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region of the COS bucket where a video processing object file is located, such as `ap-chongqing`.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Path to an input object file for video processing, such as `/movie/201907/WildAnimal.mov`.
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COSINPUTINFO_H_
