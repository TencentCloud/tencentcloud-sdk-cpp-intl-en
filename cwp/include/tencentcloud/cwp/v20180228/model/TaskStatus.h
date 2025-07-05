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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Scan status list
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scanning (including initializing)
                     * @return Scanning Scanning (including initializing)
                     * 
                     */
                    std::string GetScanning() const;

                    /**
                     * 设置Scanning (including initializing)
                     * @param _scanning Scanning (including initializing)
                     * 
                     */
                    void SetScanning(const std::string& _scanning);

                    /**
                     * 判断参数 Scanning 是否已赋值
                     * @return Scanning 是否已赋值
                     * 
                     */
                    bool ScanningHasBeenSet() const;

                    /**
                     * 获取Scan terminated (including terminating)
                     * @return Ok Scan terminated (including terminating)
                     * 
                     */
                    std::string GetOk() const;

                    /**
                     * 设置Scan terminated (including terminating)
                     * @param _ok Scan terminated (including terminating)
                     * 
                     */
                    void SetOk(const std::string& _ok);

                    /**
                     * 判断参数 Ok 是否已赋值
                     * @return Ok 是否已赋值
                     * 
                     */
                    bool OkHasBeenSet() const;

                    /**
                     * 获取Scan failed
                     * @return Fail Scan failed
                     * 
                     */
                    std::string GetFail() const;

                    /**
                     * 设置Scan failed
                     * @param _fail Scan failed
                     * 
                     */
                    void SetFail(const std::string& _fail);

                    /**
                     * 判断参数 Fail 是否已赋值
                     * @return Fail 是否已赋值
                     * 
                     */
                    bool FailHasBeenSet() const;

                    /**
                     * 获取Scan failed, with specific reason displayed: scan timeout, low client version, or client offline
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Stop Scan failed, with specific reason displayed: scan timeout, low client version, or client offline
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStop() const;

                    /**
                     * 设置Scan failed, with specific reason displayed: scan timeout, low client version, or client offline
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stop Scan failed, with specific reason displayed: scan timeout, low client version, or client offline
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStop(const std::string& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                private:

                    /**
                     * Scanning (including initializing)
                     */
                    std::string m_scanning;
                    bool m_scanningHasBeenSet;

                    /**
                     * Scan terminated (including terminating)
                     */
                    std::string m_ok;
                    bool m_okHasBeenSet;

                    /**
                     * Scan failed
                     */
                    std::string m_fail;
                    bool m_failHasBeenSet;

                    /**
                     * Scan failed, with specific reason displayed: scan timeout, low client version, or client offline
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stop;
                    bool m_stopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_
