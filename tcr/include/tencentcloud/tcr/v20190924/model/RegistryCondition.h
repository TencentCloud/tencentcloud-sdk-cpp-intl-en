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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Instance creation process
                */
                class RegistryCondition : public AbstractModel
                {
                public:
                    RegistryCondition();
                    ~RegistryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance creation process type
                     * @return Type Instance creation process type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance creation process type
                     * @param _type Instance creation process type
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
                     * 获取Instance creation process status
                     * @return Status Instance creation process status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance creation process status
                     * @param _status Instance creation process status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Reasons for transiting to the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Reasons for transiting to the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reasons for transiting to the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason Reasons for transiting to the process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Instance creation process type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance creation process status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Reasons for transiting to the process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCONDITION_H_
