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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeOnCallForm request structure.
                */
                class DescribeOnCallFormRequest : public AbstractModel
                {
                public:
                    DescribeOnCallFormRequest();
                    ~DescribeOnCallFormRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The fixed value is monitor.
                     * @return Module The fixed value is monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The fixed value is monitor.
                     * @param _module The fixed value is monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取On-call schedule ID.
                     * @return OnCallFormID On-call schedule ID.
                     * 
                     */
                    std::string GetOnCallFormID() const;

                    /**
                     * 设置On-call schedule ID.
                     * @param _onCallFormID On-call schedule ID.
                     * 
                     */
                    void SetOnCallFormID(const std::string& _onCallFormID);

                    /**
                     * 判断参数 OnCallFormID 是否已赋值
                     * @return OnCallFormID 是否已赋值
                     * 
                     */
                    bool OnCallFormIDHasBeenSet() const;

                private:

                    /**
                     * The fixed value is monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * On-call schedule ID.
                     */
                    std::string m_onCallFormID;
                    bool m_onCallFormIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMREQUEST_H_
