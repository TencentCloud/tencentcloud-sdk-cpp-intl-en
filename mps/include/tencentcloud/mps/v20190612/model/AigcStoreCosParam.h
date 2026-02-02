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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_

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
                * Information required for uploading AIGC result files to COS. The LVB_QCSRole role needs to be created and authorized.
                */
                class AigcStoreCosParam : public AbstractModel
                {
                public:
                    AigcStoreCosParam();
                    ~AigcStoreCosParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the COS bucket to store to. This value is required if you need to store the results in COS. Example value: bucket.
                     * @return CosBucketName Name of the COS bucket to store to. This value is required if you need to store the results in COS. Example value: bucket.
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置Name of the COS bucket to store to. This value is required if you need to store the results in COS. Example value: bucket.
                     * @param _cosBucketName Name of the COS bucket to store to. This value is required if you need to store the results in COS. Example value: bucket.
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取Region of the COS bucket to store to. This is required if you need to upload the results to COS. Example value: ap-guangzhou.
                     * @return CosBucketRegion Region of the COS bucket to store to. This is required if you need to upload the results to COS. Example value: ap-guangzhou.
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置Region of the COS bucket to store to. This is required if you need to upload the results to COS. Example value: ap-guangzhou.
                     * @param _cosBucketRegion Region of the COS bucket to store to. This is required if you need to upload the results to COS. Example value: ap-guangzhou.
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取Path of the COS bucket to store to.Optional.Example value: my_file.
                     * @return CosBucketPath Path of the COS bucket to store to.Optional.Example value: my_file.
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置Path of the COS bucket to store to.Optional.Example value: my_file.
                     * @param _cosBucketPath Path of the COS bucket to store to.Optional.Example value: my_file.
                     * 
                     */
                    void SetCosBucketPath(const std::string& _cosBucketPath);

                    /**
                     * 判断参数 CosBucketPath 是否已赋值
                     * @return CosBucketPath 是否已赋值
                     * 
                     */
                    bool CosBucketPathHasBeenSet() const;

                private:

                    /**
                     * Name of the COS bucket to store to. This value is required if you need to store the results in COS. Example value: bucket.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * Region of the COS bucket to store to. This is required if you need to upload the results to COS. Example value: ap-guangzhou.
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * Path of the COS bucket to store to.Optional.Example value: my_file.
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_
