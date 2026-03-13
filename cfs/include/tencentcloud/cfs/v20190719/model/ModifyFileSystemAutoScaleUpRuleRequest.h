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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_

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
                * ModifyFileSystemAutoScaleUpRule request structure.
                */
                class ModifyFileSystemAutoScaleUpRuleRequest : public AbstractModel
                {
                public:
                    ModifyFileSystemAutoScaleUpRuleRequest();
                    ~ModifyFileSystemAutoScaleUpRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID, which can be obtained by querying the file system list; [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1).
                     * @return FileSystemId File system ID, which can be obtained by querying the file system list; [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1).
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID, which can be obtained by querying the file system list; [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1).
                     * @param _fileSystemId File system ID, which can be obtained by querying the file system list; [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1).
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Threshold for triggering scaling. Value range: 10-90
                     * @return ScaleUpThreshold Threshold for triggering scaling. Value range: 10-90
                     * 
                     */
                    uint64_t GetScaleUpThreshold() const;

                    /**
                     * 设置Threshold for triggering scaling. Value range: 10-90
                     * @param _scaleUpThreshold Threshold for triggering scaling. Value range: 10-90
                     * 
                     */
                    void SetScaleUpThreshold(const uint64_t& _scaleUpThreshold);

                    /**
                     * 判断参数 ScaleUpThreshold 是否已赋值
                     * @return ScaleUpThreshold 是否已赋值
                     * 
                     */
                    bool ScaleUpThresholdHasBeenSet() const;

                    /**
                     * 获取Target threshold after expansion. value range: 10-90. the value must be less than ScaleUpThreshold.
                     * @return TargetThreshold Target threshold after expansion. value range: 10-90. the value must be less than ScaleUpThreshold.
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置Target threshold after expansion. value range: 10-90. the value must be less than ScaleUpThreshold.
                     * @param _targetThreshold Target threshold after expansion. value range: 10-90. the value must be less than ScaleUpThreshold.
                     * 
                     */
                    void SetTargetThreshold(const uint64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                    /**
                     * 获取Rule status 0: turn off, 1: turn on; keep the original status if not specified.
                     * @return Status Rule status 0: turn off, 1: turn on; keep the original status if not specified.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status 0: turn off, 1: turn on; keep the original status if not specified.
                     * @param _status Rule status 0: turn off, 1: turn on; keep the original status if not specified.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * File system ID, which can be obtained by querying the file system list; [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1).
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Threshold for triggering scaling. Value range: 10-90
                     */
                    uint64_t m_scaleUpThreshold;
                    bool m_scaleUpThresholdHasBeenSet;

                    /**
                     * Target threshold after expansion. value range: 10-90. the value must be less than ScaleUpThreshold.
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * Rule status 0: turn off, 1: turn on; keep the original status if not specified.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_
