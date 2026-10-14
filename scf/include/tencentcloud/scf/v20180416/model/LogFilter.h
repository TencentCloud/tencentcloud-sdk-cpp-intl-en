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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Log filter criteria, used to distinguish between correct and error logs
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values of filter.RetCode:
not0 means only error logs are returned.
is0 means only return correct logs.
TimeLimitExceeded returns the logs of function call timed out.
ResourceLimitExceeded returns the logs of resource limit exceeded during function calls.
UserCodeException returns the logs of user code errors in function calls.
If there is no input, all logs are returned.
                     * @return RetCode Valid values of filter.RetCode:
not0 means only error logs are returned.
is0 means only return correct logs.
TimeLimitExceeded returns the logs of function call timed out.
ResourceLimitExceeded returns the logs of resource limit exceeded during function calls.
UserCodeException returns the logs of user code errors in function calls.
If there is no input, all logs are returned.
                     * 
                     */
                    std::string GetRetCode() const;

                    /**
                     * 设置Valid values of filter.RetCode:
not0 means only error logs are returned.
is0 means only return correct logs.
TimeLimitExceeded returns the logs of function call timed out.
ResourceLimitExceeded returns the logs of resource limit exceeded during function calls.
UserCodeException returns the logs of user code errors in function calls.
If there is no input, all logs are returned.
                     * @param _retCode Valid values of filter.RetCode:
not0 means only error logs are returned.
is0 means only return correct logs.
TimeLimitExceeded returns the logs of function call timed out.
ResourceLimitExceeded returns the logs of resource limit exceeded during function calls.
UserCodeException returns the logs of user code errors in function calls.
If there is no input, all logs are returned.
                     * 
                     */
                    void SetRetCode(const std::string& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * Valid values of filter.RetCode:
not0 means only error logs are returned.
is0 means only return correct logs.
TimeLimitExceeded returns the logs of function call timed out.
ResourceLimitExceeded returns the logs of resource limit exceeded during function calls.
UserCodeException returns the logs of user code errors in function calls.
If there is no input, all logs are returned.
                     */
                    std::string m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_
