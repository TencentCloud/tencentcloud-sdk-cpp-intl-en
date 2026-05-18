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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPTOTALSIZE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPTOTALSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Total size of instance backup
                */
                class BackupTotalSize : public AbstractModel
                {
                public:
                    BackupTotalSize();
                    ~BackupTotalSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total size of full backup, in bytes
                     * @return SnapshotSize Total size of full backup, in bytes
                     * 
                     */
                    int64_t GetSnapshotSize() const;

                    /**
                     * 设置Total size of full backup, in bytes
                     * @param _snapshotSize Total size of full backup, in bytes
                     * 
                     */
                    void SetSnapshotSize(const int64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取Incremental backup total size
                     * @return OplogSize Incremental backup total size
                     * 
                     */
                    int64_t GetOplogSize() const;

                    /**
                     * 设置Incremental backup total size
                     * @param _oplogSize Incremental backup total size
                     * 
                     */
                    void SetOplogSize(const int64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     * 
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取free quota
                     * @return FreeQuota free quota
                     * 
                     */
                    int64_t GetFreeQuota() const;

                    /**
                     * 设置free quota
                     * @param _freeQuota free quota
                     * 
                     */
                    void SetFreeQuota(const int64_t& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                private:

                    /**
                     * Total size of full backup, in bytes
                     */
                    int64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * Incremental backup total size
                     */
                    int64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * free quota
                     */
                    int64_t m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPTOTALSIZE_H_
