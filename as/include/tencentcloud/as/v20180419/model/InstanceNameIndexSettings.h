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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Instance name index settings.
                */
                class InstanceNameIndexSettings : public AbstractModel
                {
                public:
                    InstanceNameIndexSettings();
                    ~InstanceNameIndexSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable instance creation sequencing, disabled by default. valid values:</p><p><strong>TRUE</strong>: indicates that instance creation sequencing is enabled; <strong>FALSE</strong>: indicates that instance creation sequencing is disabled</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled <p>Whether to enable instance creation sequencing, disabled by default. valid values:</p><p><strong>TRUE</strong>: indicates that instance creation sequencing is enabled; <strong>FALSE</strong>: indicates that instance creation sequencing is disabled</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable instance creation sequencing, disabled by default. valid values:</p><p><strong>TRUE</strong>: indicates that instance creation sequencing is enabled; <strong>FALSE</strong>: indicates that instance creation sequencing is disabled</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled <p>Whether to enable instance creation sequencing, disabled by default. valid values:</p><p><strong>TRUE</strong>: indicates that instance creation sequencing is enabled; <strong>FALSE</strong>: indicates that instance creation sequencing is disabled</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Initial serial number. the value range is related to the IndexLength parameter: - when IndexLength is 0, the value range is [0, 99999999]. - when IndexLength is [1, 8], the value range is [0, 10^IndexLength-1], and the maximum value is the maximum number with the specified digits. the default value of the initial serial number is as follows: - first-time enabling of incremental serial number: the default value is 0 (the display length is related to IndexLength, for example, if IndexLength is 4, the display value is 0000). - non-first-time enabling of incremental serial number: the previous incremental serial number is postponed, for example, if the last usage incremented to serial number 069, the new default initial serial number is 070. note: modifying the initial serial number may lead to duplication within the scaling group.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginIndex <p>Initial serial number. the value range is related to the IndexLength parameter: - when IndexLength is 0, the value range is [0, 99999999]. - when IndexLength is [1, 8], the value range is [0, 10^IndexLength-1], and the maximum value is the maximum number with the specified digits. the default value of the initial serial number is as follows: - first-time enabling of incremental serial number: the default value is 0 (the display length is related to IndexLength, for example, if IndexLength is 4, the display value is 0000). - non-first-time enabling of incremental serial number: the previous incremental serial number is postponed, for example, if the last usage incremented to serial number 069, the new default initial serial number is 070. note: modifying the initial serial number may lead to duplication within the scaling group.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBeginIndex() const;

                    /**
                     * 设置<p>Initial serial number. the value range is related to the IndexLength parameter: - when IndexLength is 0, the value range is [0, 99999999]. - when IndexLength is [1, 8], the value range is [0, 10^IndexLength-1], and the maximum value is the maximum number with the specified digits. the default value of the initial serial number is as follows: - first-time enabling of incremental serial number: the default value is 0 (the display length is related to IndexLength, for example, if IndexLength is 4, the display value is 0000). - non-first-time enabling of incremental serial number: the previous incremental serial number is postponed, for example, if the last usage incremented to serial number 069, the new default initial serial number is 070. note: modifying the initial serial number may lead to duplication within the scaling group.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginIndex <p>Initial serial number. the value range is related to the IndexLength parameter: - when IndexLength is 0, the value range is [0, 99999999]. - when IndexLength is [1, 8], the value range is [0, 10^IndexLength-1], and the maximum value is the maximum number with the specified digits. the default value of the initial serial number is as follows: - first-time enabling of incremental serial number: the default value is 0 (the display length is related to IndexLength, for example, if IndexLength is 4, the display value is 0000). - non-first-time enabling of incremental serial number: the previous incremental serial number is postponed, for example, if the last usage incremented to serial number 069, the new default initial serial number is 070. note: modifying the initial serial number may lead to duplication within the scaling group.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginIndex(const int64_t& _beginIndex);

                    /**
                     * 判断参数 BeginIndex 是否已赋值
                     * @return BeginIndex 是否已赋值
                     * 
                     */
                    bool BeginIndexHasBeenSet() const;

                    /**
                     * 获取<P>Incremental serial number length, defaults to 0, means no specified length. value range: 0-8, maximum is integer 8. - length set to 3, display form: 000, 001, 002 ... 010, 011 ... 100 ... 999, maximum is 999. - length set to 0, display form: 0, 1, 2 ... 10, 11 ... 100 ... 1000 ... 10000 ... 99999999, maximum is 99999999. note: continuous incremental serial number exceeding the limit can cause scale-out failure. do not set too small incremental serial number length.</p>.
                     * @return IndexLength <P>Incremental serial number length, defaults to 0, means no specified length. value range: 0-8, maximum is integer 8. - length set to 3, display form: 000, 001, 002 ... 010, 011 ... 100 ... 999, maximum is 999. - length set to 0, display form: 0, 1, 2 ... 10, 11 ... 100 ... 1000 ... 10000 ... 99999999, maximum is 99999999. note: continuous incremental serial number exceeding the limit can cause scale-out failure. do not set too small incremental serial number length.</p>.
                     * 
                     */
                    uint64_t GetIndexLength() const;

                    /**
                     * 设置<P>Incremental serial number length, defaults to 0, means no specified length. value range: 0-8, maximum is integer 8. - length set to 3, display form: 000, 001, 002 ... 010, 011 ... 100 ... 999, maximum is 999. - length set to 0, display form: 0, 1, 2 ... 10, 11 ... 100 ... 1000 ... 10000 ... 99999999, maximum is 99999999. note: continuous incremental serial number exceeding the limit can cause scale-out failure. do not set too small incremental serial number length.</p>.
                     * @param _indexLength <P>Incremental serial number length, defaults to 0, means no specified length. value range: 0-8, maximum is integer 8. - length set to 3, display form: 000, 001, 002 ... 010, 011 ... 100 ... 999, maximum is 999. - length set to 0, display form: 0, 1, 2 ... 10, 11 ... 100 ... 1000 ... 10000 ... 99999999, maximum is 99999999. note: continuous incremental serial number exceeding the limit can cause scale-out failure. do not set too small incremental serial number length.</p>.
                     * 
                     */
                    void SetIndexLength(const uint64_t& _indexLength);

                    /**
                     * 判断参数 IndexLength 是否已赋值
                     * @return IndexLength 是否已赋值
                     * 
                     */
                    bool IndexLengthHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable instance creation sequencing, disabled by default. valid values:</p><p><strong>TRUE</strong>: indicates that instance creation sequencing is enabled; <strong>FALSE</strong>: indicates that instance creation sequencing is disabled</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Initial serial number. the value range is related to the IndexLength parameter: - when IndexLength is 0, the value range is [0, 99999999]. - when IndexLength is [1, 8], the value range is [0, 10^IndexLength-1], and the maximum value is the maximum number with the specified digits. the default value of the initial serial number is as follows: - first-time enabling of incremental serial number: the default value is 0 (the display length is related to IndexLength, for example, if IndexLength is 4, the display value is 0000). - non-first-time enabling of incremental serial number: the previous incremental serial number is postponed, for example, if the last usage incremented to serial number 069, the new default initial serial number is 070. note: modifying the initial serial number may lead to duplication within the scaling group.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_beginIndex;
                    bool m_beginIndexHasBeenSet;

                    /**
                     * <P>Incremental serial number length, defaults to 0, means no specified length. value range: 0-8, maximum is integer 8. - length set to 3, display form: 000, 001, 002 ... 010, 011 ... 100 ... 999, maximum is 999. - length set to 0, display form: 0, 1, 2 ... 10, 11 ... 100 ... 1000 ... 10000 ... 99999999, maximum is 99999999. note: continuous incremental serial number exceeding the limit can cause scale-out failure. do not set too small incremental serial number length.</p>.
                     */
                    uint64_t m_indexLength;
                    bool m_indexLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
