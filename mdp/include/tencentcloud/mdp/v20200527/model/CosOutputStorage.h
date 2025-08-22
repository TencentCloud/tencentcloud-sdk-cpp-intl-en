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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_COSOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_COSOUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * VOD remux task cos output storage.
                */
                class CosOutputStorage : public AbstractModel
                {
                public:
                    CosOutputStorage();
                    ~CosOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos bucket name.
                     * @return Bucket cos bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos bucket name.
                     * @param _bucket cos bucket name.
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
                     * 获取region name of your cos bucket.
                     * @return Region region name of your cos bucket.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置region name of your cos bucket.
                     * @param _region region name of your cos bucket.
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
                     * 获取cos directory of vod remux task result.
                     * @return OutputDir cos directory of vod remux task result.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置cos directory of vod remux task result.
                     * @param _outputDir cos directory of vod remux task result.
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                private:

                    /**
                     * cos bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * region name of your cos bucket.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * cos directory of vod remux task result.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_COSOUTPUTSTORAGE_H_
