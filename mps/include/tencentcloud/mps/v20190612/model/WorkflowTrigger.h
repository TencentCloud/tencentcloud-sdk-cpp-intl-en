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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosFileUploadTrigger.h>
#include <tencentcloud/mps/v20190612/model/AwsS3FileUploadTrigger.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input rule. If an uploaded video hits the rule, the workflow will be triggered.
                */
                class WorkflowTrigger : public AbstractModel
                {
                public:
                    WorkflowTrigger();
                    ~WorkflowTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The trigger type. Valid values:
<li>`CosFileUpload`: Tencent Cloud COS trigger.</li>
<li>`AwsS3FileUpload`: AWS S3 trigger. Currently, this type is only supported for transcoding tasks and schemes (not supported for workflows).</li>


                     * @return Type The trigger type. Valid values:
<li>`CosFileUpload`: Tencent Cloud COS trigger.</li>
<li>`AwsS3FileUpload`: AWS S3 trigger. Currently, this type is only supported for transcoding tasks and schemes (not supported for workflows).</li>


                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The trigger type. Valid values:
<li>`CosFileUpload`: Tencent Cloud COS trigger.</li>
<li>`AwsS3FileUpload`: AWS S3 trigger. Currently, this type is only supported for transcoding tasks and schemes (not supported for workflows).</li>


                     * @param _type The trigger type. Valid values:
<li>`CosFileUpload`: Tencent Cloud COS trigger.</li>
<li>`AwsS3FileUpload`: AWS S3 trigger. Currently, this type is only supported for transcoding tasks and schemes (not supported for workflows).</li>


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
                     * 获取This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosFileUploadTrigger This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CosFileUploadTrigger GetCosFileUploadTrigger() const;

                    /**
                     * 设置This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosFileUploadTrigger This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosFileUploadTrigger(const CosFileUploadTrigger& _cosFileUploadTrigger);

                    /**
                     * 判断参数 CosFileUploadTrigger 是否已赋值
                     * @return CosFileUploadTrigger 是否已赋值
                     * 
                     */
                    bool CosFileUploadTriggerHasBeenSet() const;

                    /**
                     * 获取The AWS S3 trigger. This parameter is valid and required if `Type` is `AwsS3FileUpload`.

Note: Currently, the key for the AWS S3 bucket, the trigger SQS queue, and the callback SQS queue must be the same.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AwsS3FileUploadTrigger The AWS S3 trigger. This parameter is valid and required if `Type` is `AwsS3FileUpload`.

Note: Currently, the key for the AWS S3 bucket, the trigger SQS queue, and the callback SQS queue must be the same.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AwsS3FileUploadTrigger GetAwsS3FileUploadTrigger() const;

                    /**
                     * 设置The AWS S3 trigger. This parameter is valid and required if `Type` is `AwsS3FileUpload`.

Note: Currently, the key for the AWS S3 bucket, the trigger SQS queue, and the callback SQS queue must be the same.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _awsS3FileUploadTrigger The AWS S3 trigger. This parameter is valid and required if `Type` is `AwsS3FileUpload`.

Note: Currently, the key for the AWS S3 bucket, the trigger SQS queue, and the callback SQS queue must be the same.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAwsS3FileUploadTrigger(const AwsS3FileUploadTrigger& _awsS3FileUploadTrigger);

                    /**
                     * 判断参数 AwsS3FileUploadTrigger 是否已赋值
                     * @return AwsS3FileUploadTrigger 是否已赋值
                     * 
                     */
                    bool AwsS3FileUploadTriggerHasBeenSet() const;

                private:

                    /**
                     * The trigger type. Valid values:
<li>`CosFileUpload`: Tencent Cloud COS trigger.</li>
<li>`AwsS3FileUpload`: AWS S3 trigger. Currently, this type is only supported for transcoding tasks and schemes (not supported for workflows).</li>


                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CosFileUploadTrigger m_cosFileUploadTrigger;
                    bool m_cosFileUploadTriggerHasBeenSet;

                    /**
                     * The AWS S3 trigger. This parameter is valid and required if `Type` is `AwsS3FileUpload`.

Note: Currently, the key for the AWS S3 bucket, the trigger SQS queue, and the callback SQS queue must be the same.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AwsS3FileUploadTrigger m_awsS3FileUploadTrigger;
                    bool m_awsS3FileUploadTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_
