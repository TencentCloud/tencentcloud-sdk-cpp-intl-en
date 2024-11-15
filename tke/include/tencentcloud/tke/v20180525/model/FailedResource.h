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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_FAILEDRESOURCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_FAILEDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Resource failed to modify the Tag.
                */
                class FailedResource : public AbstractModel
                {
                public:
                    FailedResource();
                    ~FailedResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取6-Segment resource

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Resource 6-Segment resource

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置6-Segment resource

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _resource 6-Segment resource

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Reason for execution failure
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Error Reason for execution failure
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置Reason for execution failure
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _error Reason for execution failure
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 6-Segment resource

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Reason for execution failure
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_FAILEDRESOURCE_H_
