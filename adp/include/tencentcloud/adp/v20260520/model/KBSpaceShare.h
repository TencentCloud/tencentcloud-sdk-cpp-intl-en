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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Identity.h>
#include <tencentcloud/adp/v20260520/model/KBShareStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Knowledge base space share information
                */
                class KBSpaceShare : public AbstractModel
                {
                public:
                    KBSpaceShare();
                    ~KBSpaceShare() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether it has been referenced by other spaces</p>
                     * @return IsSpaceShared <p>Whether it has been referenced by other spaces</p>
                     * 
                     */
                    bool GetIsSpaceShared() const;

                    /**
                     * 设置<p>Whether it has been referenced by other spaces</p>
                     * @param _isSpaceShared <p>Whether it has been referenced by other spaces</p>
                     * 
                     */
                    void SetIsSpaceShared(const bool& _isSpaceShared);

                    /**
                     * 判断参数 IsSpaceShared 是否已赋值
                     * @return IsSpaceShared 是否已赋值
                     * 
                     */
                    bool IsSpaceSharedHasBeenSet() const;

                    /**
                     * 获取<p>Referenced spatial information.</p>
                     * @return SharedSpaceList <p>Referenced spatial information.</p>
                     * 
                     */
                    std::vector<Identity> GetSharedSpaceList() const;

                    /**
                     * 设置<p>Referenced spatial information.</p>
                     * @param _sharedSpaceList <p>Referenced spatial information.</p>
                     * 
                     */
                    void SetSharedSpaceList(const std::vector<Identity>& _sharedSpaceList);

                    /**
                     * 判断参数 SharedSpaceList 是否已赋值
                     * @return SharedSpaceList 是否已赋值
                     * 
                     */
                    bool SharedSpaceListHasBeenSet() const;

                    /**
                     * 获取<p>Shared state</p>
                     * @return SubStatus <p>Shared state</p>
                     * 
                     */
                    KBShareStatus GetSubStatus() const;

                    /**
                     * 设置<p>Shared state</p>
                     * @param _subStatus <p>Shared state</p>
                     * 
                     */
                    void SetSubStatus(const KBShareStatus& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether operation is allowed</p>
                     * @return Enable <p>Whether operation is allowed</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Whether operation is allowed</p>
                     * @param _enable <p>Whether operation is allowed</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * <p>Whether it has been referenced by other spaces</p>
                     */
                    bool m_isSpaceShared;
                    bool m_isSpaceSharedHasBeenSet;

                    /**
                     * <p>Referenced spatial information.</p>
                     */
                    std::vector<Identity> m_sharedSpaceList;
                    bool m_sharedSpaceListHasBeenSet;

                    /**
                     * <p>Shared state</p>
                     */
                    KBShareStatus m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>Whether operation is allowed</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSPACESHARE_H_
