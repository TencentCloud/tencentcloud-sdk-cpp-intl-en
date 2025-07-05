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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATEEXAMPLESWITCHREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATEEXAMPLESWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVirusAutoIsolateExampleSwitch request structure.
                */
                class ModifyVirusAutoIsolateExampleSwitchRequest : public AbstractModel
                {
                public:
                    ModifyVirusAutoIsolateExampleSwitchRequest();
                    ~ModifyVirusAutoIsolateExampleSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取MD5 checksum of the file
                     * @return MD5 MD5 checksum of the file
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5 checksum of the file
                     * @param _mD5 MD5 checksum of the file
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取Switch. Valid values: `true` (on); `false` (off).
                     * @return Status Switch. Valid values: `true` (on); `false` (off).
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Switch. Valid values: `true` (on); `false` (off).
                     * @param _status Switch. Valid values: `true` (on); `false` (off).
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * MD5 checksum of the file
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * Switch. Valid values: `true` (on); `false` (off).
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATEEXAMPLESWITCHREQUEST_H_
