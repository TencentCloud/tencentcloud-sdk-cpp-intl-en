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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyFileSystemAutoScaleUpRule response structure.
                */
                class ModifyFileSystemAutoScaleUpRuleResponse : public AbstractModel
                {
                public:
                    ModifyFileSystemAutoScaleUpRuleResponse();
                    ~ModifyFileSystemAutoScaleUpRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Rule status 0: turn off, 1: turn on.
                     * @return Status Rule status 0: turn off, 1: turn on.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Expansion threshold. value range: 10-90.
                     * @return ScaleUpThreshold Expansion threshold. value range: 10-90.
                     * 
                     */
                    uint64_t GetScaleUpThreshold() const;

                    /**
                     * 判断参数 ScaleUpThreshold 是否已赋值
                     * @return ScaleUpThreshold 是否已赋值
                     * 
                     */
                    bool ScaleUpThresholdHasBeenSet() const;

                    /**
                     * 获取Reach the threshold after expansion. value range: [10-90].
                     * @return TargetThreshold Reach the threshold after expansion. value range: [10-90].
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Rule status 0: turn off, 1: turn on.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Expansion threshold. value range: 10-90.
                     */
                    uint64_t m_scaleUpThreshold;
                    bool m_scaleUpThresholdHasBeenSet;

                    /**
                     * Reach the threshold after expansion. value range: [10-90].
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_
