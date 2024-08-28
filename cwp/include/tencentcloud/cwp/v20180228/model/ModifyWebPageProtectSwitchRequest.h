/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_

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
                * ModifyWebPageProtectSwitch request structure.
                */
                class ModifyWebPageProtectSwitchRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectSwitchRequest();
                    ~ModifyWebPageProtectSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Switch type: 1 - protection switch; 2 - auto recovery switch; 3 - remove protection directory
                     * @return SwitchType Switch type: 1 - protection switch; 2 - auto recovery switch; 3 - remove protection directory
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置Switch type: 1 - protection switch; 2 - auto recovery switch; 3 - remove protection directory
                     * @param _switchType Switch type: 1 - protection switch; 2 - auto recovery switch; 3 - remove protection directory
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取Sites that require operating switches (maximum quantity is 100)
                     * @return Ids Sites that require operating switches (maximum quantity is 100)
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Sites that require operating switches (maximum quantity is 100)
                     * @param _ids Sites that require operating switches (maximum quantity is 100)
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取1 - on; 0 - off; required when SwitchType is 1 | 2;
                     * @return Status 1 - on; 0 - off; required when SwitchType is 1 | 2;
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1 - on; 0 - off; required when SwitchType is 1 | 2;
                     * @param _status 1 - on; 0 - off; required when SwitchType is 1 | 2;
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
                     * Switch type: 1 - protection switch; 2 - auto recovery switch; 3 - remove protection directory
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * Sites that require operating switches (maximum quantity is 100)
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 1 - on; 0 - off; required when SwitchType is 1 | 2;
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_
