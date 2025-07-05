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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_

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
                * Input rule bound to COS.
                */
                class CosFileUploadTrigger : public AbstractModel
                {
                public:
                    CosFileUploadTrigger();
                    ~CosFileUploadTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * @return Bucket Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * @param _bucket Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
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
                     * 获取Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * @return Region Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * @param _region Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
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
                     * 获取Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * @return Dir Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * @param _dir Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取Format list of files that can trigger a workflow, such as ["mp4", "flv", "mov"]. If this parameter is left empty, files in all formats can trigger the workflow.
                     * @return Formats Format list of files that can trigger a workflow, such as ["mp4", "flv", "mov"]. If this parameter is left empty, files in all formats can trigger the workflow.
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置Format list of files that can trigger a workflow, such as ["mp4", "flv", "mov"]. If this parameter is left empty, files in all formats can trigger the workflow.
                     * @param _formats Format list of files that can trigger a workflow, such as ["mp4", "flv", "mov"]. If this parameter is left empty, files in all formats can trigger the workflow.
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                private:

                    /**
                     * Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * Format list of files that can trigger a workflow, such as ["mp4", "flv", "mov"]. If this parameter is left empty, files in all formats can trigger the workflow.
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
