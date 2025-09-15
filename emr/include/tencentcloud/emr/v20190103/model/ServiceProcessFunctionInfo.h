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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Process detection information
                */
                class ServiceProcessFunctionInfo : public AbstractModel
                {
                public:
                    ServiceProcessFunctionInfo();
                    ~ServiceProcessFunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detection alarm level.
                     * @return DetectAlert Detection alarm level.
                     * 
                     */
                    std::string GetDetectAlert() const;

                    /**
                     * 设置Detection alarm level.
                     * @param _detectAlert Detection alarm level.
                     * 
                     */
                    void SetDetectAlert(const std::string& _detectAlert);

                    /**
                     * 判断参数 DetectAlert 是否已赋值
                     * @return DetectAlert 是否已赋值
                     * 
                     */
                    bool DetectAlertHasBeenSet() const;

                    /**
                     * 获取Detection feature description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetetcFunctionKey Detection feature description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetDetetcFunctionKey() const;

                    /**
                     * 设置Detection feature description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detetcFunctionKey Detection feature description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetDetetcFunctionKey(const std::string& _detetcFunctionKey);

                    /**
                     * 判断参数 DetetcFunctionKey 是否已赋值
                     * @return DetetcFunctionKey 是否已赋值
                     * @deprecated
                     */
                    bool DetetcFunctionKeyHasBeenSet() const;

                    /**
                     * 获取Detection feature result

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetetcFunctionValue Detection feature result

Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetDetetcFunctionValue() const;

                    /**
                     * 设置Detection feature result

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detetcFunctionValue Detection feature result

Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetDetetcFunctionValue(const std::string& _detetcFunctionValue);

                    /**
                     * 判断参数 DetetcFunctionValue 是否已赋值
                     * @return DetetcFunctionValue 是否已赋值
                     * @deprecated
                     */
                    bool DetetcFunctionValueHasBeenSet() const;

                    /**
                     * 获取Detection results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetetcTime Detection results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetDetetcTime() const;

                    /**
                     * 设置Detection results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detetcTime Detection results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetDetetcTime(const std::string& _detetcTime);

                    /**
                     * 判断参数 DetetcTime 是否已赋值
                     * @return DetetcTime 是否已赋值
                     * @deprecated
                     */
                    bool DetetcTimeHasBeenSet() const;

                    /**
                     * 获取Detection feature description.
                     * @return DetectFunctionKey Detection feature description.
                     * 
                     */
                    std::string GetDetectFunctionKey() const;

                    /**
                     * 设置Detection feature description.
                     * @param _detectFunctionKey Detection feature description.
                     * 
                     */
                    void SetDetectFunctionKey(const std::string& _detectFunctionKey);

                    /**
                     * 判断参数 DetectFunctionKey 是否已赋值
                     * @return DetectFunctionKey 是否已赋值
                     * 
                     */
                    bool DetectFunctionKeyHasBeenSet() const;

                    /**
                     * 获取Detection feature result.
                     * @return DetectFunctionValue Detection feature result.
                     * 
                     */
                    std::string GetDetectFunctionValue() const;

                    /**
                     * 设置Detection feature result.
                     * @param _detectFunctionValue Detection feature result.
                     * 
                     */
                    void SetDetectFunctionValue(const std::string& _detectFunctionValue);

                    /**
                     * 判断参数 DetectFunctionValue 是否已赋值
                     * @return DetectFunctionValue 是否已赋值
                     * 
                     */
                    bool DetectFunctionValueHasBeenSet() const;

                    /**
                     * 获取Detection result.
                     * @return DetectTime Detection result.
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置Detection result.
                     * @param _detectTime Detection result.
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                private:

                    /**
                     * Detection alarm level.
                     */
                    std::string m_detectAlert;
                    bool m_detectAlertHasBeenSet;

                    /**
                     * Detection feature description

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detetcFunctionKey;
                    bool m_detetcFunctionKeyHasBeenSet;

                    /**
                     * Detection feature result

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detetcFunctionValue;
                    bool m_detetcFunctionValueHasBeenSet;

                    /**
                     * Detection results.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detetcTime;
                    bool m_detetcTimeHasBeenSet;

                    /**
                     * Detection feature description.
                     */
                    std::string m_detectFunctionKey;
                    bool m_detectFunctionKeyHasBeenSet;

                    /**
                     * Detection feature result.
                     */
                    std::string m_detectFunctionValue;
                    bool m_detectFunctionValueHasBeenSet;

                    /**
                     * Detection result.
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEPROCESSFUNCTIONINFO_H_
