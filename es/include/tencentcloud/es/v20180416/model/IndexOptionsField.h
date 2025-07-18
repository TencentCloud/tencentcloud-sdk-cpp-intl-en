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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Index automation field
                */
                class IndexOptionsField : public AbstractModel
                {
                public:
                    IndexOptionsField();
                    ~IndexOptionsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Max age for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ExpireMaxAge Max age for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpireMaxAge() const;

                    /**
                     * 设置Max age for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _expireMaxAge Max age for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpireMaxAge(const std::string& _expireMaxAge);

                    /**
                     * 判断参数 ExpireMaxAge 是否已赋值
                     * @return ExpireMaxAge 是否已赋值
                     * 
                     */
                    bool ExpireMaxAgeHasBeenSet() const;

                    /**
                     * 获取Max size for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ExpireMaxSize Max size for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpireMaxSize() const;

                    /**
                     * 设置Max size for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _expireMaxSize Max size for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpireMaxSize(const std::string& _expireMaxSize);

                    /**
                     * 判断参数 ExpireMaxSize 是否已赋值
                     * @return ExpireMaxSize 是否已赋值
                     * 
                     */
                    bool ExpireMaxSizeHasBeenSet() const;

                    /**
                     * 获取Rollover cycle
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RolloverMaxAge Rollover cycle
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRolloverMaxAge() const;

                    /**
                     * 设置Rollover cycle
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rolloverMaxAge Rollover cycle
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRolloverMaxAge(const std::string& _rolloverMaxAge);

                    /**
                     * 判断参数 RolloverMaxAge 是否已赋值
                     * @return RolloverMaxAge 是否已赋值
                     * 
                     */
                    bool RolloverMaxAgeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the dynamic rollover
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RolloverDynamic Whether to enable the dynamic rollover
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRolloverDynamic() const;

                    /**
                     * 设置Whether to enable the dynamic rollover
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rolloverDynamic Whether to enable the dynamic rollover
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRolloverDynamic(const std::string& _rolloverDynamic);

                    /**
                     * 判断参数 RolloverDynamic 是否已赋值
                     * @return RolloverDynamic 是否已赋值
                     * 
                     */
                    bool RolloverDynamicHasBeenSet() const;

                    /**
                     * 获取Whether to enable dynamic sharding
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ShardNumDynamic Whether to enable dynamic sharding
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetShardNumDynamic() const;

                    /**
                     * 设置Whether to enable dynamic sharding
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _shardNumDynamic Whether to enable dynamic sharding
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShardNumDynamic(const std::string& _shardNumDynamic);

                    /**
                     * 判断参数 ShardNumDynamic 是否已赋值
                     * @return ShardNumDynamic 是否已赋值
                     * 
                     */
                    bool ShardNumDynamicHasBeenSet() const;

                    /**
                     * 获取Timestamp field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TimestampField Timestamp field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置Timestamp field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _timestampField Timestamp field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTimestampField(const std::string& _timestampField);

                    /**
                     * 判断参数 TimestampField 是否已赋值
                     * @return TimestampField 是否已赋值
                     * 
                     */
                    bool TimestampFieldHasBeenSet() const;

                    /**
                     * 获取Write mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WriteMode Write mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWriteMode() const;

                    /**
                     * 设置Write mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _writeMode Write mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWriteMode(const std::string& _writeMode);

                    /**
                     * 判断参数 WriteMode 是否已赋值
                     * @return WriteMode 是否已赋值
                     * 
                     */
                    bool WriteModeHasBeenSet() const;

                private:

                    /**
                     * Max age for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_expireMaxAge;
                    bool m_expireMaxAgeHasBeenSet;

                    /**
                     * Max size for expiry purpose
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_expireMaxSize;
                    bool m_expireMaxSizeHasBeenSet;

                    /**
                     * Rollover cycle
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_rolloverMaxAge;
                    bool m_rolloverMaxAgeHasBeenSet;

                    /**
                     * Whether to enable the dynamic rollover
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_rolloverDynamic;
                    bool m_rolloverDynamicHasBeenSet;

                    /**
                     * Whether to enable dynamic sharding
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_shardNumDynamic;
                    bool m_shardNumDynamicHasBeenSet;

                    /**
                     * Timestamp field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * Write mode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_writeMode;
                    bool m_writeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
