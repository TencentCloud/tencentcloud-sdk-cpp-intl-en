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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information parameter of file output by video processing
                */
                class MediaOutputInfo : public AbstractModel
                {
                public:
                    MediaOutputInfo();
                    ~MediaOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the bucket where an output file is stored, such as ap-guangzhou.
                     * @return Region Region of the bucket where an output file is stored, such as ap-guangzhou.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the bucket where an output file is stored, such as ap-guangzhou.
                     * @param _region Region of the bucket where an output file is stored, such as ap-guangzhou.
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
                     * 获取Bucket of output file.
                     * @return Bucket Bucket of output file.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket of output file.
                     * @param _bucket Bucket of output file.
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
                     * 获取Path to output file, which must end in "/".
                     * @return Dir Path to output file, which must end in "/".
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置Path to output file, which must end in "/".
                     * @param _dir Path to output file, which must end in "/".
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                private:

                    /**
                     * Region of the bucket where an output file is stored, such as ap-guangzhou.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket of output file.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Path to output file, which must end in "/".
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_
