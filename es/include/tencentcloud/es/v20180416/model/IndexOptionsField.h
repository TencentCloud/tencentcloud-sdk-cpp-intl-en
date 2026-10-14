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
                * Index autonomous field
                */
                class IndexOptionsField : public AbstractModel
                {
                public:
                    IndexOptionsField();
                    ~IndexOptionsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Expiration time.</p>
                     * @return ExpireMaxAge <p>Expiration time.</p>
                     * 
                     */
                    std::string GetExpireMaxAge() const;

                    /**
                     * 设置<p>Expiration time.</p>
                     * @param _expireMaxAge <p>Expiration time.</p>
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
                     * 获取<p>Expiration size</p>
                     * @return ExpireMaxSize <p>Expiration size</p>
                     * 
                     */
                    std::string GetExpireMaxSize() const;

                    /**
                     * 设置<p>Expiration size</p>
                     * @param _expireMaxSize <p>Expiration size</p>
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
                     * 获取<p>Rollover period</p>
                     * @return RolloverMaxAge <p>Rollover period</p>
                     * 
                     */
                    std::string GetRolloverMaxAge() const;

                    /**
                     * 设置<p>Rollover period</p>
                     * @param _rolloverMaxAge <p>Rollover period</p>
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
                     * 获取<p>Whether to enable dynamic scrolling</p>
                     * @return RolloverDynamic <p>Whether to enable dynamic scrolling</p>
                     * 
                     */
                    std::string GetRolloverDynamic() const;

                    /**
                     * 设置<p>Whether to enable dynamic scrolling</p>
                     * @param _rolloverDynamic <p>Whether to enable dynamic scrolling</p>
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
                     * 获取<p>Whether to enable dynamic sharding</p>
                     * @return ShardNumDynamic <p>Whether to enable dynamic sharding</p>
                     * 
                     */
                    std::string GetShardNumDynamic() const;

                    /**
                     * 设置<p>Whether to enable dynamic sharding</p>
                     * @param _shardNumDynamic <p>Whether to enable dynamic sharding</p>
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
                     * 获取<p>Time partition field</p>
                     * @return TimestampField <p>Time partition field</p>
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置<p>Time partition field</p>
                     * @param _timestampField <p>Time partition field</p>
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
                     * 获取<p>Write mode</p>
                     * @return WriteMode <p>Write mode</p>
                     * 
                     */
                    std::string GetWriteMode() const;

                    /**
                     * 设置<p>Write mode</p>
                     * @param _writeMode <p>Write mode</p>
                     * 
                     */
                    void SetWriteMode(const std::string& _writeMode);

                    /**
                     * 判断参数 WriteMode 是否已赋值
                     * @return WriteMode 是否已赋值
                     * 
                     */
                    bool WriteModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable complete uninstallation</p><p>Enumeration values:</p><ul><li>true: enable complete uninstallation</li><li>false: disable complete uninstallation</li></ul>
                     * @return FullOffloadedEnable <p>Whether to enable complete uninstallation</p><p>Enumeration values:</p><ul><li>true: enable complete uninstallation</li><li>false: disable complete uninstallation</li></ul>
                     * 
                     */
                    std::string GetFullOffloadedEnable() const;

                    /**
                     * 设置<p>Whether to enable complete uninstallation</p><p>Enumeration values:</p><ul><li>true: enable complete uninstallation</li><li>false: disable complete uninstallation</li></ul>
                     * @param _fullOffloadedEnable <p>Whether to enable complete uninstallation</p><p>Enumeration values:</p><ul><li>true: enable complete uninstallation</li><li>false: disable complete uninstallation</li></ul>
                     * 
                     */
                    void SetFullOffloadedEnable(const std::string& _fullOffloadedEnable);

                    /**
                     * 判断参数 FullOffloadedEnable 是否已赋值
                     * @return FullOffloadedEnable 是否已赋值
                     * 
                     */
                    bool FullOffloadedEnableHasBeenSet() const;

                    /**
                     * 获取<p>Full uninstall lifecycle</p>
                     * @return FullOffloadedMaxAge <p>Full uninstall lifecycle</p>
                     * 
                     */
                    std::string GetFullOffloadedMaxAge() const;

                    /**
                     * 设置<p>Full uninstall lifecycle</p>
                     * @param _fullOffloadedMaxAge <p>Full uninstall lifecycle</p>
                     * 
                     */
                    void SetFullOffloadedMaxAge(const std::string& _fullOffloadedMaxAge);

                    /**
                     * 判断参数 FullOffloadedMaxAge 是否已赋值
                     * @return FullOffloadedMaxAge 是否已赋值
                     * 
                     */
                    bool FullOffloadedMaxAgeHasBeenSet() const;

                    /**
                     * 获取<p>Completely uninstall the lifecycle after backup index retrieval</p>
                     * @return FullOffloadedRetrieveMaxAge <p>Completely uninstall the lifecycle after backup index retrieval</p>
                     * 
                     */
                    std::string GetFullOffloadedRetrieveMaxAge() const;

                    /**
                     * 设置<p>Completely uninstall the lifecycle after backup index retrieval</p>
                     * @param _fullOffloadedRetrieveMaxAge <p>Completely uninstall the lifecycle after backup index retrieval</p>
                     * 
                     */
                    void SetFullOffloadedRetrieveMaxAge(const std::string& _fullOffloadedRetrieveMaxAge);

                    /**
                     * 判断参数 FullOffloadedRetrieveMaxAge 是否已赋值
                     * @return FullOffloadedRetrieveMaxAge 是否已赋值
                     * 
                     */
                    bool FullOffloadedRetrieveMaxAgeHasBeenSet() const;

                private:

                    /**
                     * <p>Expiration time.</p>
                     */
                    std::string m_expireMaxAge;
                    bool m_expireMaxAgeHasBeenSet;

                    /**
                     * <p>Expiration size</p>
                     */
                    std::string m_expireMaxSize;
                    bool m_expireMaxSizeHasBeenSet;

                    /**
                     * <p>Rollover period</p>
                     */
                    std::string m_rolloverMaxAge;
                    bool m_rolloverMaxAgeHasBeenSet;

                    /**
                     * <p>Whether to enable dynamic scrolling</p>
                     */
                    std::string m_rolloverDynamic;
                    bool m_rolloverDynamicHasBeenSet;

                    /**
                     * <p>Whether to enable dynamic sharding</p>
                     */
                    std::string m_shardNumDynamic;
                    bool m_shardNumDynamicHasBeenSet;

                    /**
                     * <p>Time partition field</p>
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * <p>Write mode</p>
                     */
                    std::string m_writeMode;
                    bool m_writeModeHasBeenSet;

                    /**
                     * <p>Whether to enable complete uninstallation</p><p>Enumeration values:</p><ul><li>true: enable complete uninstallation</li><li>false: disable complete uninstallation</li></ul>
                     */
                    std::string m_fullOffloadedEnable;
                    bool m_fullOffloadedEnableHasBeenSet;

                    /**
                     * <p>Full uninstall lifecycle</p>
                     */
                    std::string m_fullOffloadedMaxAge;
                    bool m_fullOffloadedMaxAgeHasBeenSet;

                    /**
                     * <p>Completely uninstall the lifecycle after backup index retrieval</p>
                     */
                    std::string m_fullOffloadedRetrieveMaxAge;
                    bool m_fullOffloadedRetrieveMaxAgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
