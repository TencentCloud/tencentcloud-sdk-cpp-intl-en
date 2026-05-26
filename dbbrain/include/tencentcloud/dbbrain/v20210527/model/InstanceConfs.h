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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCECONFS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCECONFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Instance configuration.
                */
                class InstanceConfs : public AbstractModel
                {
                public:
                    InstanceConfs();
                    ~InstanceConfs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable database inspection. Valid values: Yes, No.
                     * @return DailyInspection Whether to enable database inspection. Valid values: Yes, No.
                     * 
                     */
                    std::string GetDailyInspection() const;

                    /**
                     * 设置Whether to enable database inspection. Valid values: Yes, No.
                     * @param _dailyInspection Whether to enable database inspection. Valid values: Yes, No.
                     * 
                     */
                    void SetDailyInspection(const std::string& _dailyInspection);

                    /**
                     * 判断参数 DailyInspection 是否已赋值
                     * @return DailyInspection 是否已赋值
                     * 
                     */
                    bool DailyInspectionHasBeenSet() const;

                    /**
                     * 获取Whether to enable instance overview. Valid values: Yes, No.
                     * @return OverviewDisplay Whether to enable instance overview. Valid values: Yes, No.
                     * 
                     */
                    std::string GetOverviewDisplay() const;

                    /**
                     * 设置Whether to enable instance overview. Valid values: Yes, No.
                     * @param _overviewDisplay Whether to enable instance overview. Valid values: Yes, No.
                     * 
                     */
                    void SetOverviewDisplay(const std::string& _overviewDisplay);

                    /**
                     * 判断参数 OverviewDisplay 是否已赋值
                     * @return OverviewDisplay 是否已赋值
                     * 
                     */
                    bool OverviewDisplayHasBeenSet() const;

                    /**
                     * 获取Custom big key analysis separator for Redis only
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyDelimiters Custom big key analysis separator for Redis only
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeyDelimiters() const;

                    /**
                     * 设置Custom big key analysis separator for Redis only
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyDelimiters Custom big key analysis separator for Redis only
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyDelimiters(const std::vector<std::string>& _keyDelimiters);

                    /**
                     * 判断参数 KeyDelimiters 是否已赋值
                     * @return KeyDelimiters 是否已赋值
                     * 
                     */
                    bool KeyDelimitersHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShardNum 
                     * 
                     */
                    std::string GetShardNum() const;

                    /**
                     * 设置
                     * @param _shardNum 
                     * 
                     */
                    void SetShardNum(const std::string& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return AnalysisTopKey 
                     * 
                     */
                    std::string GetAnalysisTopKey() const;

                    /**
                     * 设置
                     * @param _analysisTopKey 
                     * 
                     */
                    void SetAnalysisTopKey(const std::string& _analysisTopKey);

                    /**
                     * 判断参数 AnalysisTopKey 是否已赋值
                     * @return AnalysisTopKey 是否已赋值
                     * 
                     */
                    bool AnalysisTopKeyHasBeenSet() const;

                private:

                    /**
                     * Whether to enable database inspection. Valid values: Yes, No.
                     */
                    std::string m_dailyInspection;
                    bool m_dailyInspectionHasBeenSet;

                    /**
                     * Whether to enable instance overview. Valid values: Yes, No.
                     */
                    std::string m_overviewDisplay;
                    bool m_overviewDisplayHasBeenSet;

                    /**
                     * Custom big key analysis separator for Redis only
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keyDelimiters;
                    bool m_keyDelimitersHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_analysisTopKey;
                    bool m_analysisTopKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCECONFS_H_
