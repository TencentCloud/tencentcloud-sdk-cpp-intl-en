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
                     * 获取Trigger type. Only `CosFileUpload` is supported currently.
                     * @return Type Trigger type. Only `CosFileUpload` is supported currently.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger type. Only `CosFileUpload` is supported currently.
                     * @param Type Trigger type. Only `CosFileUpload` is supported currently.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosFileUploadTrigger This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CosFileUploadTrigger GetCosFileUploadTrigger() const;

                    /**
                     * 设置This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CosFileUploadTrigger This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCosFileUploadTrigger(const CosFileUploadTrigger& _cosFileUploadTrigger);

                    /**
                     * 判断参数 CosFileUploadTrigger 是否已赋值
                     * @return CosFileUploadTrigger 是否已赋值
                     */
                    bool CosFileUploadTriggerHasBeenSet() const;

                private:

                    /**
                     * Trigger type. Only `CosFileUpload` is supported currently.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter is required and valid when `Type` is `CosFileUpload`, indicating the COS trigger rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CosFileUploadTrigger m_cosFileUploadTrigger;
                    bool m_cosFileUploadTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTRIGGER_H_
