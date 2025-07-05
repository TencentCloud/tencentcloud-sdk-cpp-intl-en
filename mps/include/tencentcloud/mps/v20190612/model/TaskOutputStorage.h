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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/S3OutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of the media processing output object.
                */
                class TaskOutputStorage : public AbstractModel
                {
                public:
                    TaskOutputStorage();
                    ~TaskOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The storage type for a media processing output file. Valid values:
<li>`COS`: Tencent Cloud COS</li>
<li>`AWS-S3`: AWS S3. This type is only supported for AWS tasks, and the output bucket must be in the same region as the bucket of the source file.</li>
                     * @return Type The storage type for a media processing output file. Valid values:
<li>`COS`: Tencent Cloud COS</li>
<li>`AWS-S3`: AWS S3. This type is only supported for AWS tasks, and the output bucket must be in the same region as the bucket of the source file.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The storage type for a media processing output file. Valid values:
<li>`COS`: Tencent Cloud COS</li>
<li>`AWS-S3`: AWS S3. This type is only supported for AWS tasks, and the output bucket must be in the same region as the bucket of the source file.</li>
                     * @param _type The storage type for a media processing output file. Valid values:
<li>`COS`: Tencent Cloud COS</li>
<li>`AWS-S3`: AWS S3. This type is only supported for AWS tasks, and the output bucket must be in the same region as the bucket of the source file.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The location to save the output object in COS. This parameter is valid and required when `Type` is COS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CosOutputStorage The location to save the output object in COS. This parameter is valid and required when `Type` is COS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CosOutputStorage GetCosOutputStorage() const;

                    /**
                     * 设置The location to save the output object in COS. This parameter is valid and required when `Type` is COS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cosOutputStorage The location to save the output object in COS. This parameter is valid and required when `Type` is COS.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage);

                    /**
                     * 判断参数 CosOutputStorage 是否已赋值
                     * @return CosOutputStorage 是否已赋值
                     * 
                     */
                    bool CosOutputStorageHasBeenSet() const;

                    /**
                     * 获取The AWS S3 bucket to save the output file. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return S3OutputStorage The AWS S3 bucket to save the output file. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    S3OutputStorage GetS3OutputStorage() const;

                    /**
                     * 设置The AWS S3 bucket to save the output file. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _s3OutputStorage The AWS S3 bucket to save the output file. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetS3OutputStorage(const S3OutputStorage& _s3OutputStorage);

                    /**
                     * 判断参数 S3OutputStorage 是否已赋值
                     * @return S3OutputStorage 是否已赋值
                     * 
                     */
                    bool S3OutputStorageHasBeenSet() const;

                private:

                    /**
                     * The storage type for a media processing output file. Valid values:
<li>`COS`: Tencent Cloud COS</li>
<li>`AWS-S3`: AWS S3. This type is only supported for AWS tasks, and the output bucket must be in the same region as the bucket of the source file.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The location to save the output object in COS. This parameter is valid and required when `Type` is COS.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CosOutputStorage m_cosOutputStorage;
                    bool m_cosOutputStorageHasBeenSet;

                    /**
                     * The AWS S3 bucket to save the output file. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    S3OutputStorage m_s3OutputStorage;
                    bool m_s3OutputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
