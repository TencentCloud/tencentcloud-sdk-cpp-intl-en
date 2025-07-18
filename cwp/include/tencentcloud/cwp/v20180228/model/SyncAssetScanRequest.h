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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SyncAssetScan request structure.
                */
                class SyncAssetScanRequest : public AbstractModel
                {
                public:
                    SyncAssetScanRequest();
                    ~SyncAssetScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether synchronized: true - yes; false - no; the default is false
                     * @return Sync Whether synchronized: true - yes; false - no; the default is false
                     * 
                     */
                    bool GetSync() const;

                    /**
                     * 设置Whether synchronized: true - yes; false - no; the default is false
                     * @param _sync Whether synchronized: true - yes; false - no; the default is false
                     * 
                     */
                    void SetSync(const bool& _sync);

                    /**
                     * 判断参数 Sync 是否已赋值
                     * @return Sync 是否已赋值
                     * 
                     */
                    bool SyncHasBeenSet() const;

                private:

                    /**
                     * Whether synchronized: true - yes; false - no; the default is false
                     */
                    bool m_sync;
                    bool m_syncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANREQUEST_H_
